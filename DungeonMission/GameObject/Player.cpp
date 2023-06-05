#include "Player.h"

Player::Player(const LoadParameters* parameters): SDLGameObject(parameters)
{
	width = parameters->getWidth();
	height = parameters->getHeight();
	textureID = parameters->getTextureID();
}

void Player::Draw(SDL_Renderer* renderer)
{
	SDLGameObject::Draw();
}

void Player::Update()
{
	if (TheInputhandler::Instance()->isKeyDown(SDL_SCANCODE_RIGHT))
	{
		position.SetX(position.GetX() + 1);

	}
	if (TheInputhandler::Instance()->isKeyDown(SDL_SCANCODE_LEFT))
	{
		position.SetX(position.GetX() - 1);
	}
	if (TheInputhandler::Instance()->isKeyDown(SDL_SCANCODE_UP))
	{
		position.SetY(position.GetY() - 1);
	}
	if (TheInputhandler::Instance()->isKeyDown(SDL_SCANCODE_DOWN))
	{
		position.SetY(position.GetY() + 1);
	}



	/*currentFrame = int(((SDL_GetTicks() / 100) % 6));
	acceleration.SetX(1);*/
	SDLGameObject::Update();

}

void Player::clean()
{
}
