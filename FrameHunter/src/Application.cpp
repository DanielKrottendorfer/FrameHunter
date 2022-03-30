

using namespace std;

#include "Application.hpp"
#include "FHLog.hpp"
#include "SDLWindow.hpp"

namespace FrameHunter
{
    Application::Application(){

        FH_LOG_INIT();
        FH_CORE_INFO("CORE LOG ER INITIALIZED");
        FH_CLIENT_INFO("CLIENT LOGGER INITITIALIZED");

        window = unique_ptr<Window>( SDLWindow::Create() );

    };
    Application::~Application(){
    };
    void Application::Run()
    {
        while (running)
        {
            window->OnUpdate();
            SDL_Event Event;
            while (SDL_PollEvent(&Event))
            {
                if (Event.type == SDL_KEYDOWN)
                {
                    switch (Event.key.keysym.sym)
                    {
                    case SDLK_ESCAPE:
                        running = 0;
                        break;
                    default:
                        break;
                    }
                }
                else if (Event.type == SDL_QUIT)
                {
                    running = 0;
                }
            }
            window->draw();
        }


    };
}
