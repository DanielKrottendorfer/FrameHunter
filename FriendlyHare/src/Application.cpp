#include "FriendlyHare.hpp"

#include <iostream>
using namespace std;

namespace FriendlyHare{

    Application::Application(){};
    Application::~Application(){};
    void Application::Run(){
        cout << "call run " << endl;
    };

}