#pragma once

using namespace std;

#include "FHLog.hpp"
#include "Event.h"

namespace FrameHunter
{
    class __declspec(dllexport) Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    template <class App>
    void run_application()
    {
        auto app = new App();
        app->Run();
        delete app;
    }
}
