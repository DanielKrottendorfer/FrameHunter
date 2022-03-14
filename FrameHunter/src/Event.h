#pragma once

enum class EventType
{
    None = 0,
    WindowClose,
    WindowResize,
    WindowFocus,
    WindowLostFocus,
    WindowMoved,
    AppUpdate,
    AppRender,
    KeyPressed,
    KeyReleased,
    MouseButtonPressed,
    MouseButtonReleased,
    MouseMoved,
    MouseScrolled
};

#define BIT(x) (1 << x)
enum EventCategory
{
    None = 0,
    EventCategoryApplication    = BIT(0),
    EventCategoryInput          = BIT(1),
    EventCategoryKeyboard       = BIT(2),
    EventCategoryMouse          = BIT(3),
    EventCategoryMouseButton    = BIT(4)
};

class Event
{
    public:
        


    private:
        EventType event_type;
        union
        {
            unsigned int dimension [2];
            unsigned int position [2];
            unsigned int key_code;
            unsigned int mouse_botton [3];
            int wheel_dir;
        };
};
