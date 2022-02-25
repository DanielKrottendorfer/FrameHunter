
rmdir /S build
mkdir build
cd build

cmake .. -G "MinGW Makefiles"
mingw32-make

set "PATH=%PATH%%cd%\src;"

.\TestGame.exe
