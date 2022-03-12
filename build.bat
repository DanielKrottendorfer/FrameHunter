
@echo off

mkdir build
cd build

cmake .. -G "MinGW Makefiles"
mingw32-make

cd ..

copy .\build\FriendlyHare\libFriendlyHareEngine.dll .
copy .\build\AwsomeGame.exe .
