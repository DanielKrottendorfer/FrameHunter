#pragma once

#include "Window.hpp"
#include "src/pch.hpp"
#include "SDL.h"
#include "SDL_events.h"

using namespace std;

namespace FrameHunter
{

    class SDLWindow : public Window
    {
    public:
        bool PollEvent(Event* event) override;


        inline unsigned int GetHeight() const override { return width; }
        inline unsigned int GetWidth() const override { return height; }

        void SetVSynv(bool enabled) override { vsync_enabled = enabled; };
        bool isVSync() const override { return vsync_enabled; };

        void draw() override;



        SDLWindow();
        ~SDLWindow();

    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
        const char* title = "FrameHunter";
        unsigned int width = 1080;
        unsigned int height = 720;
        bool vsync_enabled = false;
        
        void Init();
    };

}
