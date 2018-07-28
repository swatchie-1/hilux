Hilux Core 1.0.0
===============================

28/7/2018
----------------------
Our webwallet https://wallet.hiluxcoin.com is now a secured site with SSL Encryption. We encourage anyone to test it out and send some funds that you mined. <br><br>



27/7/2018
---------------
www.hiluxcoin.com is up.<br>
Still actively looking for support from the community in: <br>
- Web Wallet : If someone can help to make an Android App that can utilize the camera for QR Code scanning and auto fills the Address Box would be great.
- More users using the Web Wallet : http://wallet.hiluxcoin.com and sending me a PM on discord if it is useful or useless.
- Ideas on how to encourage usage of the Web Wallet
- Increasing security of the Web Wallet.

<br><br>

25/7/2018
------------
Update PM: Discord Channel Is Here. https://discord.gg/sQfYNbT

We are actually preparing to launch at a specific date to be announced later. Despite this, we begun to see interest from the community especially from the initiated ones who actually took action to start mining and starting their own masternodes. We applaud you for that. We will start a discord channel soon to communicate with members who wish to be part of our humble team and we are looking for people who are interested in developing this block chain space to make it more accessible to everyone. Keep it up and contact soon. 
<br><br>
Just FYI, it takes 100 confirmations for miners to get their rewards, so don't be surprised if you don't see any rewards after mining in the pool. Rest assured, you will receive it after payment has been cleared. Payment in the official pool is quite frequent: Every 20 mins on confirmed payments.
<br><br>
Swatchie-1<br><br><br>



Latest 24/7/2018 PM
Block explorer is now available:
http://explorer.hiluxcoin.com
Web Wallet is Linked to Explorer.


Latest 24/7/2018
- Completed Mining pool : http://pool.hiluxcoin.com
- Completed Web Wallet : http://wallet.hiluxcoin.com

In Progress and Help Is Appreciated:
- Block Explorer


https://www.hiluxcoin.com



Instructions On How To Run The Wallet Client (QT) : <br><br>
Go to Releases Page https://github.com/swatchie-1/hilux/releases and download the latest version:<br>
If using Windows, download the Hilux-QT.exe<br>
If using Linux, Use Hilux-qt-linux.tar.gz and Gunzip it into your folder and run it in your Linux GUI
<br><br><br>



Instructions On Setting Up A Masternode<br><br>
i) Send 1000 HLX coins to yourself. (You must have at least 1000 HLX in a single Address)<br>
ii) Go to Tools ==> Console ==> type : masternode outputs<br>
Then type: masternode genkey<br>
(Note: one genkey for one masternode is required)<br>
Copy the characters and fill it into Settings ==> Open Masternode Configuration File and follow its template<br>
iii) Get a $5 or $10 VPS installed on Ubuntu 16.04, login and type wget https://github.com/swatchie-1/hilux/releases/download/v1.0.0/masternode.sh <br>
iv) type in your VPS SSH : chmod +x masternode.sh<br>
Then type ./masternode.sh<br>
v) Follow the screen instructions by filling in the masternode genkey info on step ii.<br>
vi) For the IP address, fill in your VPS IP address with :7979. Example: 123.456.789.1:7979<br>
vii) Follow the instructions and press enter when required.<br>
viii) Once the masternode is installed, give it 5 minutes more to sync. <br>
Go to Masternodes Tab. If you can't see it, go to Settings ==> Advanced Settings ==> show masternodes Tab.<br>
Then close your windows wallet and wait for 2 mins and open it again.<br>
ix) When you see your masternode at the Masternodes Tab, right click on it and click Start Alias.<br>
x) Ensure your masternode is started by going to your VPS' SSH and type : hilux-cli masternode status<br>
Ensure it says: "Masternode Successfully Started". Otherwise repeat step ix and x.<br>

END<br>



What is Hilux Coin?
----------------

Hilux Coin is a day to day cryptocurrency use which can be used to reward children, exchange for virtual goods and even as an exchange for real currency. This is to make it easy for anybody at all ages to send a cryptocurrency which is yours forever to keep throughout the whole world. We have made it easy for people to use the service by using the simple & user friendly web-wallet at http://wallet.hiluxcoin.com. This way you are sure that you have some funds anywhere in the world.
<br><br>

We Are Looking For Developers & Designers At All Levels To Contribute & Have Your Name Below:
--------------------------------------------------------------------------------------------
Goal & Direction:<br>
Secure, easy to use, and lasts forever.<br>
Everyone is welcomed to use it, mine it, share it.<br>
<br><br>
It uses X16R Algorithm and can be mined using any X16R Miner. You can setup your own pool, or use our pool. Our pool is http://pool.hiluxcoin.com but more to come.<br>
<br><br>
Current Developer:<br>
- Swatchie-1<br>
(looking for more)<br>










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
