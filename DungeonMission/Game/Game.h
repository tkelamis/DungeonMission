#pragma once
#include "SDL.h"
#include "SDL_main.h"
#include "../Managers/TextureManager.h"
#include "../Movement/Vector2D.h"
#include "../GameObject/GameObject.h"
#include <vector>
#include "../Movement/InputHandler.h"



class Game
{
public:
	
	~Game() = default;

	static Game* Instance();
	SDL_Renderer* getRenderer() const { return _renderer; }

	bool Init(const char* title, int xpos, int ypos, int height, int width, bool fullscreen);
	void Render();
	void Update();
	void HandleEvents();
	void Clean();
	bool IsRunning = true;
	int _currentFrame;
	SDL_Window* _window;
	SDL_Renderer* _renderer;

private:
	Game() =default;
	
	std::vector<IGameObject*> gameObjects;
	IGameObject* go;
	IGameObject* elanis;
	IGameObject* kakos_elanio;
	
	static Game* the_Instance;

};
typedef Game TheGame;





