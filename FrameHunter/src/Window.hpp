#pragma once
#include "Event.hpp"

namespace FrameHunter
{

    class Window
    {
    public:
        virtual ~Window() {}

        virtual bool PollEvent(Event* event) = 0;

        virtual unsigned int GetHeight() const = 0;
        virtual unsigned int GetWidth() const = 0;

        virtual void SetVSynv(bool enabled) = 0;
        virtual bool isVSync() const = 0;
        virtual void draw() = 0;

        static Window *Create();
    };
}