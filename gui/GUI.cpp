#include "GUI.h"

GUI::GUI()
{
	window = NULL;
	renderer = NULL;
	texture = NULL;
}

void GUI::init()
{
	SDL_Init(SDL_INIT_VIDEO);
}
