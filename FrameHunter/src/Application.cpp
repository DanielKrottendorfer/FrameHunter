

using namespace std;

#include "Application.hpp"
#include "FHLog.hpp"
#include "SDLWindow.hpp"

namespace FrameHunter
{
    Application::Application(){};
    Application::~Application(){
    };
    void Application::Run()
    {
        FH_LOG_INIT();

        auto window = SDLWindow::Create();
        FH_CORE_INFO("CORE LOG ER INITIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");

        bool Running = true;
        while (Running)
        {
            SDL_Event Event;
            while (SDL_PollEvent(&Event))
            {
                if (Event.type == SDL_KEYDOWN)
                {
                    switch (Event.key.keysym.sym)
                    {
                    case SDLK_ESCAPE:
                        Running = 0;
                        break;
                    default:
                        break;
                    }
                }
                else if (Event.type == SDL_QUIT)
                {
                    Running = 0;
                }
            }
            window->swap();
        }


    };
}
