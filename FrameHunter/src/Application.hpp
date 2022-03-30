#pragma once

#include "FHLog.hpp"
#include "Event.h"
#include "Window.hpp"
#include "src/pch.hpp"

namespace FrameHunter
{
    class __declspec(dllexport) Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    private:
        std::unique_ptr<Window> window;
        bool running = true;
    };

    template <class App>
    void run_application()
    {
        static_assert(is_base_of<Application, App>::value, "App must derive from Application");

        auto app = new App();
        app->Run();
        delete app;
    }
}
