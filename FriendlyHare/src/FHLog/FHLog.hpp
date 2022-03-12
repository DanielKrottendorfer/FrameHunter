#pragma once

namespace FriendlyHare
{
    class FHLog
    {
    public:
        static void init();

        static void client_trace(const char *message);
        static void client_info(const char *message);
        static void client_warn(const char *message);
        static void client_error(const char *message);

        static void core_trace(const char *message);
        static void core_info(const char *message);
        static void core_warn(const char *message);
        static void core_error(const char *message);
    };

#ifdef RELEASE
#define FH_CORE_TRACE(message)
#define FH_CORE_INFO(message)
#define FH_CORE_WARN(message)
#define FH_CORE_ERROR(message)

#define FH_CLIENT_TRACE(message)
#define FH_CLIENT_INFO(message)
#define FH_CLIENT_WARN(message)
#define FH_CLIENT_ERROR(message)

#else
#define FH_CORE_TRACE(message) FHLog::core_trace(message)
#define FH_CORE_INFO(message) FHLog::core_info(message)
#define FH_CORE_WARN(message) FHLog::core_warn(message)
#define FH_CORE_ERROR(message) FHLog::core_error(message)

#define FH_CLIENT_TRACE(message) FHLog::client_trace(message)
#define FH_CLIENT_INFO(message) FHLog::client_info(message)
#define FH_CLIENT_WARN(message) FHLog::client_warn(message)
#define FH_CLIENT_ERROR(message) FHLog::client_error(message)
#endif

};
