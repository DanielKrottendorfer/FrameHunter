#include "FriendlyHare.hpp"
#include <iostream>


using namespace std;

class MyGame : public FriendlyHare::Application
{
public:
    ~MyGame() {}
    MyGame() {}
};

int main()
{
    FriendlyHare::run_application<MyGame>();
    return 0;
};
