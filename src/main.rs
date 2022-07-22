extern crate librsync;
extern crate directories;

use directories::ProjectDirs;
use std::path::PathBuf;
use std::fs::read_dir;
use std::io;

fn backup_recursive(src: &PathBuf, dest: &PathBuf, dry: bool) -> io::Result<()> {
    if src.is_dir() {
        for entry in read_dir(src)? {
            if let Ok(e) = entry {
                if let Err(_) = backup_recursive(&e.path(), dest, dry) {
                    eprintln!("Error accessing {}", e.path().display());
                }
            }
        }
        return Ok(())
    }
    println!("{:30} -> {:30}  |  from {}", src.file_name().unwrap().to_str().unwrap(), dest.display(), src.parent().unwrap().display());
    if !dry {
        // Use librsync to create base if missing and create new
        // datestamped patch next to base.
        // Maybe use the base-dir (CWD) as a key for patch/base names.
    }
    Ok(())
}

fn main() {
    let project = ProjectDirs::from("is", "morgaes", "bbup").unwrap();
    let current = std::env::current_dir().unwrap();
    let dest = &project.data_dir();
    let dry = true;

    println!("Backing up your current directory");
    println!("{} -> {}",
             &current.display(),
             &dest.display());
    if let Err(e) = backup_recursive(&current, &project.data_dir().to_path_buf(), dry) {
        eprintln!("Error! {}", e);
    }
}
