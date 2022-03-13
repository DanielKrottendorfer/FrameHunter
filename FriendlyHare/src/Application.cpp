
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
        FH_LOG_INIT();
        FH_CORE_INFO("CORsE LOGGER INITITIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");
        FH_LOG_CLEANUP();
    };
}
