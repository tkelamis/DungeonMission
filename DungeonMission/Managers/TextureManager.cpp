#include "TextureManager.h"
#include "SDL.h"
#include <iostream>
#include <SDL_image.h>




TextureManager* TextureManager::Instance()
{
    if (single_Instance == 0)
    {
        single_Instance = new TextureManager();
        return single_Instance;
    }

    return single_Instance;
}TextureManager* TextureManager::single_Instance = 0;


bool TextureManager::Load(std::string fileName, std::string id, SDL_Renderer* renderer)
{
    SDL_Surface* surface = IMG_Load(fileName.c_str());
    if (surface == 0)
    {
        std::cout << IMG_GetError() << std::endl;
        return false;
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);

    // everything went ok, add the texture to our list
    if (texture)
    {
        textureMap[id] = texture;
        return true;
    }
    // reaching here means something went wrong
    return false;

}

void TextureManager::Draw(std::string id, int x, int y, int width, int height, SDL_Renderer* renderer, SDL_RendererFlip flip)
{
    SDL_Rect srcRect;
    SDL_Rect destRect;
    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.w = destRect.w = width;
    srcRect.h = destRect.h = height;
    destRect.x = x;
    destRect.y = y;
    SDL_RenderCopyEx(renderer, textureMap[id], &srcRect,
        &destRect, 0, 0, flip);
}

void TextureManager::DrawFrame(std::string id, int x, int y, int width, int height, SDL_Renderer* renderer, int currentFrame, int currentRow, SDL_RendererFlip flip)
{
    SDL_Rect srcRect;
    SDL_Rect destRect;
    srcRect.x = width * currentFrame;
    srcRect.y = height * (currentRow - 1);
    srcRect.w = destRect.w = width;
    srcRect.h = destRect.h = height;
    destRect.x = x;
    destRect.y = y;
    SDL_RenderCopyEx(renderer, textureMap[id], &srcRect,
        &destRect, 0, 0, flip);
}
