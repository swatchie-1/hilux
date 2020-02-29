Mac OS X Build Instructions and Notes
====================================
The commands in this guide should be executed in a Terminal application.
The built-in one is located in `/Applications/Utilities/Terminal.app`.

Preparation
-----------
Install the OS X command line tools:

`xcode-select --install`

When the popup appears, click `Install`.

Then install [Homebrew](https://brew.sh).

Dependencies
----------------------

    brew install automake berkeley-db4 libtool boost --c++11 miniupnpc openssl pkg-config protobuf qt libevent

If you want to build the disk image with `make deploy` (.dmg / optional), you need RSVG

    brew install librsvg

NOTE: Building with Qt4 is still supported, however, doing so could result in a broken UI. Therefore, building with Qt5 is recommended.

Build Hilux Core
------------------------

        git clone https://github.com/swatchie-1/hilux.git
        cd hilux

2.  Build Hilux Core:

    Configure and build the headless hilux binaries as well as the GUI (if Qt is found).

    You can disable the GUI build by passing `--without-gui` to configure.

        ./autogen.sh
        ./configure
        make

3.  It is recommended to build and run the unit tests:

        make check

4.  You can also create a .dmg that contains the .app bundle (optional):

        make deploy

Running
-------

Hilux Core is now available at `./src/hiluxd`

Before running, it's recommended you create an RPC configuration file.

    echo -e "rpcuser=hiluxrpc\nrpcpassword=$(xxd -l 16 -p /dev/urandom)" > "/Users/${USER}/Library/Application Support/HiluxCore/hilux.conf"

    chmod 600 "/Users/${USER}/Library/Application Support/HiluxCore/hilux.conf"

The first time you run hiluxd, it will start downloading the blockchain. This process could take several hours.

You can monitor the download process by looking at the debug.log file:

    tail -f $HOME/Library/Application\ Support/HiluxCore/debug.log

Other commands:
-------

    ./src/hiluxd -daemon # Starts the hilux daemon.
    ./src/hilux-cli --help # Outputs a list of command-line options.
    ./src/hilux-cli help # Outputs a list of RPC commands when the daemon is running.

Using Qt Creator as IDE
------------------------
You can use Qt Creator as an IDE, for hilux development.
Download and install the community edition of [Qt Creator](https://www.qt.io/download/).
Uncheck everything except Qt Creator during the installation process.

1. Make sure you installed everything through Homebrew mentioned above
2. Do a proper ./configure --enable-debug
3. In Qt Creator do "New Project" -> Import Project -> Import Existing Project
4. Enter "hilux-qt" as project name, enter src/qt as location
5. Leave the file selection as it is
6. Confirm the "summary page"
7. In the "Projects" tab select "Manage Kits..."
8. Select the default "Desktop" kit and select "Clang (x86 64bit in /usr/bin)" as compiler
9. Select LLDB as debugger (you might need to set the path to your installation)
10. Start debugging with Qt Creator

Notes
-----

* Tested on OS X 10.8 through 10.12 on 64-bit Intel processors only.

If you are building `hiluxd` or `Hilux Core` for others, your build machine should be set up
as follows for maximum compatibility:

All dependencies should be compiled with these flags:

 -mmacosx-version-min=10.7
 -arch x86_64
 -isysroot $(xcode-select --print-path)/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk

Once dependencies are compiled, see [doc/release-process.md](release-process.md) for how the Hilux Core
bundle is packaged and signed to create the .dmg disk image that is distributed.

Running
-------

It's now available at `./hiluxd`, provided that you are still in the `src`
directory. We have to first create the RPC configuration file, though.

Run `./hiluxd` to get the filename where it should be put, or just try these
commands:

    echo -e "rpcuser=hiluxrpc\nrpcpassword=$(xxd -l 16 -p /dev/urandom)" > "/Users/${USER}/Library/Application Support/HiluxCore/hilux.conf"
    chmod 600 "/Users/${USER}/Library/Application Support/HiluxCore/hilux.conf"

The next time you run it, it will start downloading the blockchain, but it won't
output anything while it's doing this. This process may take several hours;
you can monitor its process by looking at the debug.log file, like this:

    tail -f $HOME/Library/Application\ Support/HiluxCore/debug.log

Other commands:
-------

    ./hiluxd -daemon # to start the hilux daemon.
    ./hilux-cli --help  # for a list of command-line options.
    ./hilux-cli help    # When the daemon is running, to get a list of RPC commands
