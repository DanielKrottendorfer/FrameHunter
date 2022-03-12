
@echo off

mkdir build
cd build

cmake .. -G "MinGW Makefiles"
mingw32-make

cd ..

copy .\build\FriendlyHare\libFriendlyHare.dll .
copy .\build\FriendlyHare\src\FHLog\libFHLog.dll .
copy .\build\AwsomeGame.exe .
