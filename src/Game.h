#pragma once

#include <SDL2/SDL.h>
#include "Renderer.h"
#include "Player.h"
#include "Map.h"

class Game {
public:
    bool init();
    void run();
    void cleanup();

private:
    bool initSDL();
    void handleEvents();
    void update();
    void render();

    SDL_Window* window;
    SDL_Renderer* sdRenderer;
    Renderer* rederer;

}