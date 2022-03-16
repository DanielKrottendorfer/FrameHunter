
@echo off

mkdir build
cd build

cmake .. -G "Visual Studio 17 2022" -A x64
MSBuild AwsomeGame.sln

cd ..

copy .\build\FrameHunter\Debug\FrameHunter.dll .
copy .\build\FrameHunter\src\FHLog\Debug\FHLog.dll .
copy .\build\Debug\AwsomeGame.exe .
