#pragma once
#include "SDL2/SDL.h"

const int SCREEN_WIDTH = 160;
const int SCREEN_HEIGHT = 144;

class GUI
{
	SDL_Window* window;
	SDL_Surface* surface;
	SDL_Renderer* renderer;
	SDL_Texture* texture;

	GUI();
	void init();
};

