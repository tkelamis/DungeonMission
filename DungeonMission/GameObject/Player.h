#pragma once
#include "../GameObject/SDLGameObject.h"
#include "../Movement/InputHandler.h"

class Player : public SDLGameObject
{
public:
	Player(const LoadParameters* parameters);
	virtual void Draw(SDL_Renderer* renderer);
	virtual void Update();
	virtual void clean();
};

