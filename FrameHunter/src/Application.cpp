
#include <iostream>
using namespace std;

#include "Application.hpp"
#include "FHLog/FHLog.hpp"

namespace FrameHunter
{
    Application::Application(){};
    Application::~Application(){};
    void Application::Run()
    {
        FH_LOG_INIT();
        FH_CORE_INFO("CORE LOGGER INITITIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");
    };
}
