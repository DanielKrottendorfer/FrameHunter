#ifndef RELEASE

using namespace std;

#include "FHLog.hpp"

namespace FrameHunter
{
    
    static shared_ptr<spdlog::logger> s_CoreLogger;
    static shared_ptr<spdlog::logger> s_ClientLogger;



    void FHLog::client_trace(const char *message)
    {
        s_ClientLogger->trace(message);
    }
    void FHLog::client_info(const char *message)
    {
        s_ClientLogger->info(message);
    }
    void FHLog::client_warn(const char *message)
    {
        s_ClientLogger->warn(message);
    }
    void FHLog::client_error(const char *message)
    {
        s_ClientLogger->error(message);
    }

    void FHLog::core_trace(const char *message)
    {
        s_CoreLogger->trace(message);
    }
    void FHLog::core_info(const char *message)
    {
        s_CoreLogger->info(message);
    }
    void FHLog::core_warn(const char *message)
    {
        s_CoreLogger->warn(message);
    }
    void FHLog::core_error(const char *message)
    {
        s_CoreLogger->error(message);
    }

    void FHLog::init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");

        s_CoreLogger = spdlog::stdout_color_mt("FRIENLYs_HAREs");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("APPLICATION");
        s_ClientLogger->set_level(spdlog::level::trace);
    }
}
#endif
