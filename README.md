ShugoConsole
============

ShugoConsole allows the modification of some variables of the CryEngine's console in Aion.
NCSoft disabled access to the CryEngine's console in the western release of Aion.
Because it was the only way to modify some basic graphic parameters like the field of view
(which is necessary for large screens of multi-screen setup)

This program is an adaption from the original ShugoConsole

This utility currently gives access to :
- Field of view
- Maximum camera distance
- Chat log
- FPS limit
- Triple buffering
- Anisotropic filtering
- Console Enabler
- Stops ENV distance from setting to '512'

Compatibility
-------------

ShugoConsole works with every version of Aion.
It doesn't use fixed offsets but scans the game's memory to locate the CryEngine's console variables.
When compiled in 64-bit mode, it works both with the 32-bit and 64-bit versions of the game.
When compiled in 32-bit mode, it only works for the 32-bit version.