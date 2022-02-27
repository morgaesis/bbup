![Build Status](https://github.com/morgaesis/bbup/actions/workflows/main.yml/badge.svg) [![codecov](https://codecov.io/gh/morgaesis/bbup/branch/main/graph/badge.svg?token=0K9F6XVA6S)](https://codecov.io/gh/morgaesis/bbup)
# BBup – Btfrs Backup utility 

A utility for remote or local, optionally encrypted, rolling backup using BTRFS. Only the local system needs to be on BTRFS. Having remote on BTRFS speeds up push/rollback if unencrypted.

## Development
### Prerequisites
You will need:
- `g++`
- `googletest`
- `bazel/bazelisk`

### Building
`bazel` is used for building:
```shell
bazel build //src:main
```
Binaries appear in `./bazel-bin/`

### Testing
Using `bazel` to test everything:
```shell
bazel test //src:*
```
#### Code Coverage
Code coverage is found with `bazel coverage //src:*`, and is published to [CodeCov](https://app.codecov.io/gh/morgaesis/bbup). The coverage is published as a badge at the top of this README as well.


## TODO

- [ ] Back up locally (hourly)
- [ ] Back up staggered
- [ ] Back up according to config file
- [ ] Clean up backups
- [ ] Push to remote
- [ ] Push to remote encrypted
- [ ] Enable installation
- [ ] Package for various Distros
