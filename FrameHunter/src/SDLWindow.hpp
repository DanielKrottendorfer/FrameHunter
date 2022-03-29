#include "Window.h"
#include "SDL.h"

using namespace std;

namespace FrameHunter
{

    class SDLWindow : public Window
    {
    public:
        void OnUpdate() override {};

        inline unsigned int GetHeight() const override { return width; }
        inline unsigned int GetWidth() const override { return height; }

        void SetEventCallback() override {};

        void SetVSynv(bool enabled) override { vsync_enabled = enabled; };
        bool isVSync() const override { return vsync_enabled; };

        void swap() override;

        void Init();


        SDLWindow();
        ~SDLWindow();

    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
        const char* title = "FrameHunter";
        unsigned int width = 1080;
        unsigned int height = 720;
        bool vsync_enabled = false;
    };

}
