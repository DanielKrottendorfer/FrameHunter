
@echo off

mkdir build
cd build

cmake .. -G "Visual Studio 17 2022"
MSBuild AwsomeGame.sln

cd ..

copy .\build\FrameHunter\Debug\FrameHunter.dll .
copy .\FrameHunter\external\SDL2\lib\x64\SDL2.dll .
copy .\build\Debug\AwsomeGame.exe .

@REM copy .\build\FrameHunter\libFrameHunter.dll .
@REM copy .\build\FrameHunter\src\FHLog\libFHLog.dll .
@REM copy .\build\AwsomeGame.exe .
