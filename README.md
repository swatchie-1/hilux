Hilux Core 1.0.0
===============================

Latest 24/7/2018
- Completed Mining pool : http://pool.hiluxcoin.com
- Completed Web Wallet : http://wallet.hiluxcoin.com

In Progress and Help Is Appreciated:
- Block Explorer


https://www.hiluxcoin.com



Instructions On How To Run The Wallet Client (QT) :
Go to Releases Page https://github.com/swatchie-1/hilux/releases and download the latest version:
If using Windows, download the Hilux-QT.exe
If using Linux, Use Hilux-qt.tar.gz and Gunzip it into your folder and run it in your Linux GUI




Instructions On Setting Up A Masternode
i) Send 1000 HLX coins to yourself. (You must have at least 1000 HLX in a single Address)
ii) Go to Tools ==> Console ==> type : masternode outputs
Then type: masternode genkey
(Note: one genkey for one masternode is required)
Copy the characters and fill it into Settings ==> Open Masternode Configuration File and follow its template
iii) Get a $5 or $10 VPS installed on Ubuntu 16.04, login and type wget https://github.com/swatchie-1/hilux/releases/download/v1.0.0/masternode.sh 
iv) type in your VPS SSH : chmod +x masternode.sh
Then type ./masternode.sh
v) Follow the screen instructions by filling in the masternode genkey info on step ii.
vi) For the IP address, fill in your VPS IP address with :7979. Example: 123.456.789.1:7979
vii) Follow the instructions and press enter when required.
viii) Once the masternode is installed, give it 5 minutes more to sync. 
Go to Masternodes Tab. If you can't see it, go to Settings ==> Advanced Settings ==> show masternodes Tab.
Then close your windows wallet and wait for 2 mins and open it again.
ix) When you see your masternode at the Masternodes Tab, right click on it and click Start Alias.
x) Ensure your masternode is started by going to your VPS' SSH and type : hilux-cli masternode status
Ensure it says: "Masternode Successfully Started". Otherwise repeat step ix and x.

END



What is Hilux Coin?
----------------

Hilux Coin is a day to day cryptocurrency use which can be used to reward children, exchange for virtual goods and even as an exchange for real currency. This is to make it easy for anybody at all ages to send a cryptocurrency which is yours forever to keep throughout the whole world. We have made it easy for people to use the service by using the simple & user friendly web-wallet at http://wallet.hiluxcoin.com. This way you are sure that you have some funds anywhere in the world.


We Are Looking For Developers & Designers At All Levels To Contribute & Have Your Name Below:
--------------------------------------------------------------------------------------------
Goal & Direction:
Secure, easy to use, and lasts forever.
Everyone is welcomed to use it, mine it, share it.

It uses X16R Algorithm and can be mined using any X16R Miner. You can setup your own pool, or use our pool. Our pool is http://pool.hiluxcoin.com but more to come.

Current Developer:
- Swatchie-1
(looking for more)










License
-------

Hilux Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/hiluxcrypto/hilux/tags) are created to indicate new official,
stable release versions of Hilux Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](/doc/unit-tests.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

The Travis CI system makes sure that every pull request is built for Windows
and Linux, OS X, and that unit and sanity tests are automatically run.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.
