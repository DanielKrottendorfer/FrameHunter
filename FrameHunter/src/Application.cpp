

using namespace std;

#include "Application.hpp"
#include "FHLog.hpp"

namespace FrameHunter
{
    Application::Application(){};
    Application::~Application(){};
    void Application::Run()
    {
        FH_LOG_INIT();
        FH_CORE_INFO("CORE LsOGsssGss ERss INsITsIsssTsIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");
    };
}
