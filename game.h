
#ifndef Game_hpp
#define Game_hpp
#include "SDL.h"
#include <stdio.h>

class Game{
public:
	Game();
	~Game();

	void init(const char* title, int x, int y, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

private:
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;

};



#endif // GAME_HPP_INCLUDED