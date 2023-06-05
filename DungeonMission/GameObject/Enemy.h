#pragma once
#include "GameObject.h"
#include "../Game/LoadParameters.h"
#include "../GameObject/SDLGameObject.h"
#include "../Movement/InputHandler.h"


class Enemy :public SDLGameObject
{
public:
	Enemy(const LoadParameters* parameters);
	void Draw(SDL_Renderer* renderer);
	void Update();
	void clean();

};

