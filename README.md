slock - simple screen locker (liupold's build)
============================
simple screen locker utility for X.

Features
------------

* xrdb support (`pywal`)
* custom message. (Font:`Fira Code`)
* Display Power Management Signaling (2sec)

Requirements
------------
In order to build slock you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

## change user, group name.

Afterwards enter the following command to build and install slock
(if necessary as root):

    make clean install


Running slock
-------------
Simply invoke the 'slock' command. To get out of it, enter your password.
