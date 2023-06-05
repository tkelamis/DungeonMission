#include "SDLGameObject.h"
#include "../Managers/TextureManager.h"
#include "../Game/Game.h"

typedef Game TheGame;


SDLGameObject::SDLGameObject(const LoadParameters* parameters) : IGameObject(parameters),position(parameters->getX(), parameters->getY()), velocity(0, 0), acceleration(0,0)

{
		width = parameters->getWidth();
		height = parameters->getHeight();
		textureID = parameters->getTextureID();
		currentRow = 1;
		currentFrame = 1;
}

void SDLGameObject::Draw()
{
	TextureManager::Instance()->Draw(textureID, position.GetX(),position.GetY(),
		width, height, Game::Instance()->getRenderer(), SDL_FLIP_NONE);
}

void SDLGameObject::Update()
{
	/*position += velocity;
	velocity += acceleration;*/
}

void SDLGameObject::clean()
{
}
