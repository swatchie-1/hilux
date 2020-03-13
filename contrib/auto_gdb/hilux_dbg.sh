#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.hiluxcore/hiluxd.pid file instead
hilux_pid=$(<~/.hiluxcore/testnet3/hiluxd.pid)
sudo gdb -batch -ex "source debug.gdb" hiluxd ${hilux_pid}
