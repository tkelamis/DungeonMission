#include "Game.h"
#include "SDL.h"
#include <iostream>
#include <SDL_image.h>
#include "../GameObject/Player.h"
#include "../GameObject/Enemy.h"




Game* Game::Instance()
{
    if (the_Instance == 0)
    {
        the_Instance = new Game();
        return the_Instance;
    }
   
    return the_Instance;
}Game* Game::the_Instance = 0;


bool Game::Init(const char* title, int xpos, int ypos, int height, int width, bool fullscreen)
{

    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    // initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        std::cout << "SDL Initialize success!!\n";

        // if succeeded create our window
        _window = SDL_CreateWindow(title, xpos, ypos, height, width, flags);
        if (_window)
        {
            std::cout << "Window has been created!!\n";
            //after window is being created lets create the renderer
            _renderer = SDL_CreateRenderer(_window, -1, 0);

            if (_renderer)
            {
                std::cout << "Renderer has been created!!\n";
                //if renderer is created set the color
                SDL_SetRenderDrawColor(_renderer, 0, 0, 0, 255);
                SDL_RenderSetLogicalSize(_renderer, 480, 360);
            }
            else
            {
                std::cout << "Renderer creation failed!!\n";
                return false;
            }
        }
        else
        {
            std::cout << "Window creation failed!!\n";
            return false;
        }
    }
    else
    {
        std::cout << "SDL Initialize failed!!\n";
        return false;
    }

    if (!TheTextureManager::Instance()->Load("assets/girlTile.png", "girlTile", _renderer))
    {
        
        return false;
    }
    TheTextureManager::Instance()->Load("assets/girlPunch.png", "girlPunch", _renderer);



    gameObjects.push_back(new Player(new LoadParameters(100, 100, 32, 32, "girlTile")));
    gameObjects.push_back(new Enemy(new LoadParameters(300, 300, 32, 32, "girlTile")));
    

    return true;
}



void Game::Render()
{
    // clear the window to black
    SDL_RenderClear(_renderer);

    for (std::vector<IGameObject*>::size_type i = 0; i != gameObjects.size(); i++)
    {
        gameObjects[i]->Draw();
    }
    

    // show the window
    SDL_RenderPresent(_renderer);
}

void Game::Update()
{
    TheInputhandler::Instance()->update();


    for (std::vector<IGameObject*>::size_type i = 0; i != gameObjects.size(); i++)
    {
        gameObjects[i]->Update();
    }
}

void Game::HandleEvents()
{
    Uint8* SDL_GetKeyState(int* numkeys);


    SDL_Event event;
    if (SDL_PollEvent(&event))
    {

        if (event.type == SDL_QUIT)
        {
            IsRunning = false;
        }
    }


    
}

void Game::Clean()
{
    TheInputhandler::Instance()->clean();

    std::cout << "cleaning game\n";
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
    SDL_Quit();
}
