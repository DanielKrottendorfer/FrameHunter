
#include "FHLog.hpp"
#include "SDLWindow.hpp"
#include "Event.hpp"
#include "src/pch.hpp"

namespace FrameHunter
{

    static bool SDL_INITIALIZED = false;

    Window *Window::Create()
    {
        return new SDLWindow;
    }

    bool SDLWindow::PollEvent(Event *event)
    {
        SDL_Event e;
        int t = SDL_PollEvent(&e);

        if (t)
        {
            switch (e.type)
            {
            case SDL_QUIT:
                FH_CORE_INFO("quit");
                event->event_type = EventType::WindowClose;
                break;
            case SDL_WINDOWEVENT_RESIZED:
                event->event_type = EventType::WindowResize;
                event->dimension[0] = std::move(e.window.data1);
                event->dimension[1] = std::move(e.window.data2);
                break;
            case SDL_WINDOWEVENT_FOCUS_GAINED:
                event->event_type = EventType::WindowFocus;
                break;
            case SDL_WINDOWEVENT_FOCUS_LOST:
                event->event_type = EventType::WindowLostFocus;
                break;
            case SDL_WINDOWEVENT_MOVED:
                event->event_type = EventType::WindowMoved;
                event->position[0] = std::move(e.window.data1);
                event->position[1] = std::move(e.window.data2);
            case SDL_KEYDOWN:
                FH_CORE_INFO("keydown");
                event->event_type = EventType::KeyPressed;
                event->key_char = std::move(e.key.keysym.sym);
                break;
            case SDL_KEYUP:
                FH_CORE_INFO("keyup");
                event->event_type = EventType::KeyReleased;
                event->key_char = std::move(e.key.keysym.sym);
                break;
            case SDL_MOUSEBUTTONDOWN:
                event->event_type = EventType::MouseButtonPressed;
                event->position[0] = std::move(e.button.x);
                event->position[1] = std::move(e.button.y);
                break;
            case SDL_MOUSEBUTTONUP:
                event->event_type = EventType::MouseButtonReleased;
                event->position[0] = std::move(e.button.x);
                event->position[1] = std::move(e.button.y);
                break;
            case SDL_MOUSEMOTION:
                event->event_type = EventType::MouseMoved;
                event->position[0] = std::move(e.motion.x);
                event->position[1] = std::move(e.motion.y);
                break;
            case SDL_MOUSEWHEEL:
                event->event_type = EventType::MouseScrolled;
                event->wheel_dir = std::move(e.wheel.preciseY);
                break;
            default:
                break;
            }
        }

        return t;
    }

    SDLWindow::SDLWindow()
    {
        Init();
        FH_CORE_INFO("SDL WINDOW INITIALIZED");
    }

    void SDLWindow::draw()
    {
        SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

        SDL_Delay(16);
    }

    void SDLWindow::Init()
    {
        if (!SDL_INITIALIZED)
        {
            if (SDL_Init(SDL_INIT_VIDEO) < 0)
            {
                FH_CORE_ERROR("Failed to initialize SDL");
                FH_CORE_ERROR(SDL_GetError());
                exit(1);
            }
        }

        int rendererFlags, windowFlags;

        rendererFlags = SDL_RENDERER_ACCELERATED;

        windowFlags = 0;

        window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, windowFlags);

        if (!window)
        {
            FH_CORE_ERROR("Failed to open window");
            FH_CORE_ERROR(SDL_GetError());
            exit(1);
        }

        SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

        renderer = SDL_CreateRenderer(window, -1, rendererFlags);

        if (!renderer)
        {
            FH_CORE_ERROR("Failed to initialize renderer");
            FH_CORE_ERROR(SDL_GetError());
            exit(1);
        }
    }

    SDLWindow::~SDLWindow()
    {
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
    }

}
