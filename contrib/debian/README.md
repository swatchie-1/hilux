
Debian
====================
This directory contains files used to package hiluxd/hilux-qt
for Debian-based Linux systems. If you compile hiluxd/hilux-qt yourself, there are some useful files here.

## hilux: URI support ##


hilux-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install hilux-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your hilux-qt binary to `/usr/bin`
and the `../../share/pixmaps/hilux128.png` to `/usr/share/pixmaps`

hilux-qt.protocol (KDE)

