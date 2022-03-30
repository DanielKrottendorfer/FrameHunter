#pragma once

enum class EventType
{
    None = 0,
    WindowClose,
    WindowResize,
    WindowFocus,
    WindowLostFocus,
    WindowMoved,
    KeyPressed,
    KeyReleased,
    MouseButtonPressed,
    MouseButtonReleased,
    MouseMoved,
    MouseScrolled
};

class Event
{
    public:
        EventType event_type;
        union
        {
            unsigned int dimension [2];
            unsigned int position [2];
            char key_char;
            unsigned int mouse_botton [3];
            float wheel_dir;
        };
};
