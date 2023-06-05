#include <iostream>
#include "Game/Game.h"
#include "GameStates/GameState.h"
#include "GameStates/PlayState.h"
#include "GameStates/MenuState.h"
#include "GameStates/GameStateMachine.h"


const int FPS = 60;
const int DELAY_TIME = 1000.0f / FPS;


int main(int argc, char* args[])
{
    GameState* elanis = new MenuState;
    GameStateMachine* elanio = new GameStateMachine;
    elanio->PushState(elanis);
 

    Uint32 frameStart, frameTime;

    Game* theGame = Game::Instance();
    std::cout << "Game init attempt...\n";
    if (theGame->Init("Chapter 1", 100, 100, 960, 720, false))
    {
        std::cout << "Game init success!!\n";
        
        while (theGame->IsRunning)
        {
            frameStart = SDL_GetTicks();


            theGame->HandleEvents();
            theGame->Update();
            theGame->Render();
            
            frameTime = SDL_GetTicks() - frameStart;
            if (frameTime < DELAY_TIME)
            {
                SDL_Delay((int)(DELAY_TIME - frameTime));
            }

        }
    }
    else
    {
        std::cout << "Game init failed because of error - " << SDL_GetError() << "\n";
        return -1;
    }

    std::cout << "Game is cleaning.....\n";
    theGame->Clean();

    return 0;
}
