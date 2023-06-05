#include "Enemy.h"

Enemy::Enemy(const LoadParameters* parameter):SDLGameObject(parameter)
{
	width = parameter->getWidth();
	height = parameter->getHeight();
	textureID = parameter->getTextureID();
}


void Enemy::Draw(SDL_Renderer* renderer)
{
	SDLGameObject::Draw();
}

void Enemy::Update()
{
	/*position.SetX(position.GetX() + 1);
	position.SetY(position.GetY() + 1);*/
	if (TheInputhandler::Instance()->isKeyDown(SDL_SCANCODE_1))
	{
		position.SetX(position.GetX() + 1);

	}
	if (TheInputhandler::Instance()->isKeyDown(SDL_SCANCODE_2))
	{
		position.SetX(position.GetX() - 1);
	}
}

void Enemy::clean()
{
}
