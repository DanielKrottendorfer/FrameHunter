
#include <iostream>
using namespace std;

#include "FriendlyHare.hpp"
#include "FHLog/FHLog.hpp"

namespace FriendlyHare
{

    Application::Application(){};
    Application::~Application(){};
    void Application::Run()
    {
        FHLog::init();
        FH_CORE_INFO("CORE LOGGER INITITIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");

    };
}
