# BBup -- Btfrs Backup utility

A utility for remote or local, optionally encrypted, rolling backup using BTRFS. Only the local system needs to be on BTRFS. Having remote on BTRFS speeds up push/rollback if unencrypted.

## Development
### Prerequisites
You will need:
- `g++`
- `make`

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
Getting code coverage for C++ seems at first to be quite complicated. Therefore, this is slated for some far future when the project is more mature.


## TODO

- [ ] Back up locally (hourly)
- [ ] Back up staggered
- [ ] Back up according to config file
- [ ] Clean up backups
- [ ] Push to remote
- [ ] Push to remote encrypted
- [ ] Enable installation
- [ ] Package for various Distros
