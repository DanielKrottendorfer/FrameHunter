
@echo off
mkdir build
cd build

cmake .. -G "MinGW Makefiles"
mingw32-make

set "PATH=%PATH%%cd%\FriendlyHare;"

.\AwsomeGame.exe

cd ..