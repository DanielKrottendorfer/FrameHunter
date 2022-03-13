
@echo off

mkdir build
cd build

cmake .. -G "MinGW Makefiles"
mingw32-make

cd ..

copy .\build\FrameHunter\libFrameHunter.dll .
copy .\build\FrameHunter\src\FHLog\libFHLog.dll .
copy .\build\AwsomeGame.exe .
