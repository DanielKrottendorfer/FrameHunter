

namespace FrameHunter
{

    class Window
    {
    public:
        virtual ~Window() {}

        virtual void OnUpdate() = 0;

        virtual unsigned int GetHeight() const = 0;
        virtual unsigned int GetWidth() const = 0;

        virtual void SetEventCallback() = 0;
        virtual void SetVSynv(bool enabled) = 0;
        virtual bool isVSync() const = 0;
        virtual void swap() = 0;

        static Window *Create();
    };
}