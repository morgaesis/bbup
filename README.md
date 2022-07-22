![Build Status](https://github.com/morgaesis/bbup/actions/workflows/build.yml/badge.svg) [![codecov](https://codecov.io/gh/morgaesis/bbup/branch/main/graph/badge.svg?token=0K9F6XVA6S)](https://codecov.io/gh/morgaesis/bbup)
# BBup – Btfrs Backup utility 

A utility for remote or local, optionally encrypted, rolling backup using BTRFS or rsync. Using BTRFS speeds up each backup/restore and decreases disk usage on backup node.

## Development
### Prerequisites
You will need:
- `Cargo`
- `Rust`
- `Rsync`
- `BTRFS`

### Building
`cargo` is used for building:
```shell
cargo build
```
Binaries appear in `target/`

### Testing
Using `cargo` to test everything:
```shell
cargo test
```
#### Code Coverage
> See the [Rust code-coverage documentation](https://doc.rust-lang.org/rustc/instrument-coverage.html) for more details.
Code coverage is found with the `instrument-coverage` build flag. The code coverage in the CI pipeligen is published to [CodeCov](https://app.codecov.io/gh/morgaesis/bbup) and is visible as a badge at the top of this README as well.
```
cargo clean
RUSTFLAGS="-C instrument-coverage" cargo build
```

## Priorities
Here follows as list of what is to come and what has been completed. The list is ordered by importance and order of implementation.

[ ] Local backup with `rsync`
[ ] Basic push backup with `rsync`
[ ] Design config format
[ ] Scheduling from config
[ ] System wide installation with Systemd timer files
[ ] Pruning on backup node during backup
[ ] Add `btrfs` backend in addition to `rsync`
[ ] Polling backup on backup node
[ ] Encryption at rest
[ ] Encryption in transit
