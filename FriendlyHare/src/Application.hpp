#pragma once

#include <type_traits>

#include "FriendlyHare.hpp"
#include "FHLog/FHLog.hpp"

namespace FriendlyHare
{
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    template <class App>
    void run_application()
    {
        static_assert(std::is_base_of<Application, App>::value, "App must derive from Application");
        auto app = new App();
        app->Run();
        delete app;
    }
}
