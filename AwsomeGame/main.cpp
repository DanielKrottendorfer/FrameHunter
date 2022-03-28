#include "FrameHunter.hpp"

using namespace std;

class MyGame : public FrameHunter::Application
{
public:
    ~MyGame() {}
    MyGame() {}
};

int main()
{
    FrameHunter::run_application<MyGame>();
    
    return 0;
};
