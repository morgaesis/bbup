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
1. Basic push backup with `rsync`
2. Design config format
3. Scheduling from config
4. System wide installation with Systemd timer files
5. Pruning on backup node during backup
6. Add `btrfs` backend in addition to `rsync`
7. Polling backup on backup node
8. Encryption at rest
9. Encryption in transit
