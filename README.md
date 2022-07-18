# Custom Faction Example

This repositry contains sample addon with custom factions based on SOG: Prairie Fire Creator DLC assets.

## Setup

### Requirements

- [HEMTT](https://github.com/synixebrett/HEMTT) binary placed in project root or globally installed
  - `hemtt` (Linux) or `hemtt.exe` (Windows) or `setup.exe` (Windows global install)

### Procedure

_Replace `hemtt` with `hemtt.exe` on Windows._

- Open terminal (Linux) or command line (Windows)
- Run `$ hemtt build` to create a development build
- Run `$ hemtt build --release` to create a release build (add `-f` to overwrite already built release)
- Run `$ hemtt clean` to clean build files

**Windows Helpers:**
- Double-click `build.bat` to create a development build
