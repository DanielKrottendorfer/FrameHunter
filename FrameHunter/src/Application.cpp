

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
            Event event;
            while(window->PollEvent(&event)){
                if (event.event_type == EventType::KeyPressed)
                {
                    switch (event.key_char)
                    {
                    case '\x1B':
                        running = 0;
                        break;
                    default:
                        break;
                    }
                }
                else if (event.event_type == EventType::WindowClose)
                {
                    running = 0;
                }}

            window->draw();
        }


    };
}
