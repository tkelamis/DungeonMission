#pragma once
#include "SDL.h"
#include "../Game/Game.h"
#include "../GameObject/Player.h"




class InputHandler
{
public:

    static InputHandler* Instance();
    
    void update();
    void clean();
    bool isKeyDown(SDL_Scancode key);


private:
    static InputHandler* theInstance;
    const Uint8* p_keystate;
    


    InputHandler() {}
    ~InputHandler() {}
};
typedef InputHandler TheInputhandler;