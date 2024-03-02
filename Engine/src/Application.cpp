#include "Application.h"
#include "MyMath.h"
#include "SDL.h"
// #include "GLFW/glfw3.h"
#include <iostream>
namespace Piero {
void Application::Init() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("Tess", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 680, SDL_WINDOW_RESIZABLE);
    bool isRunning = true;
    while (isRunning) {
        SDL_Event e;
        SDL_PollEvent(&e);
        while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				isRunning = false;
			}
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
}
}