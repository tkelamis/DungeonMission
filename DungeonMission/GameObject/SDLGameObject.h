#pragma once
#include "../GameObject/GameObject.h"
#include "../Game/LoadParameters.h"
#include "SDL.h"
#include "SDL_main.h"
#include "../Movement/Vector2D.h"


class SDLGameObject :public IGameObject
{
public:
	SDLGameObject(const LoadParameters* parameters);

	virtual void Draw() override;
	virtual void Update()override;
	virtual void clean()override;

protected:
	Vector2D position;
	Vector2D velocity;
	Vector2D acceleration;

	int width;
	int height;
	int currentRow;
	int currentFrame;
	std::string textureID;

};

