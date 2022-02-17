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
No code coverage is currently measured. Some day this will hopefully be measured, but not for now.


## TODO

- [ ] Back up locally (hourly)
- [ ] Back up staggered
- [ ] Back up according to config file
- [ ] Clean up backups
- [ ] Push to remote
- [ ] Push to remote encrypted
- [ ] Enable installation
- [ ] Package for various Distros
