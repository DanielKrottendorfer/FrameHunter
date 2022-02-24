
g++ -o FriendlyHareEngine.dll -s -shared src/FriendlyHareEngine.cpp -Wl,--subsystem,windows
g++ -o game.exe test.cpp -I inc -L . -l FriendlyHareEngine
.\game.exe
