
#include <iostream>
using namespace std;

#include "FrameHunter.hpp"
#include "FHLog/FHLog.hpp"

namespace FrameHunter
{

    Application::Application(){};
    Application::~Application(){};
    void Application::Run()
    {
        FH_LOG_INIT();
        FH_CORE_INFO("CORsE LOGGER INITITIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");
        FH_LOG_CLEANUP();
    };
}
