#include "SDLWindow.hpp"
#include "FHLog.hpp"

#include "pch.hpp"

namespace FrameHunter
{

    static bool SDL_INITIALIZED = false;

    Window *Window::Create()
    {
        return new SDLWindow;
    }

    SDLWindow::SDLWindow()
    {
        Init();
        FH_CORE_INFO("SDL WINDOW INITIALIZED");
    }

    void SDLWindow::swap()
    {
        SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
        
		SDL_Delay(16);
    }

    void SDLWindow::Init()
    {
        if (SDL_INITIALIZED)
            return;

        int rendererFlags, windowFlags;

        rendererFlags = SDL_RENDERER_ACCELERATED;

        windowFlags = 0;

        if (SDL_Init(SDL_INIT_VIDEO) < 0)
        {
            FH_CORE_ERROR("Failed to initialize SDL");
            FH_CORE_ERROR(SDL_GetError());
            exit(1);
        }

        window = SDL_CreateWindow("Shooter 01", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, windowFlags);

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
    }

}
