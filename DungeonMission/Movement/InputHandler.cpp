#include "InputHandler.h"


InputHandler* InputHandler::Instance()
{
    if (theInstance == 0)
    {
        theInstance = new InputHandler();
        return theInstance;
    }
    return theInstance;
}InputHandler* InputHandler::theInstance = 0;

void InputHandler::update()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		p_keystate = SDL_GetKeyboardState(0);

		if (event.type == SDL_QUIT)
		{
			TheGame::Instance()->Clean();
		}
	}
}

void InputHandler::clean()
{

}

bool InputHandler::isKeyDown(SDL_Scancode key)
{
    if (p_keystate != 0)
        if (p_keystate != 0)
        {
            if (p_keystate[key] == 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

    return false;

}
