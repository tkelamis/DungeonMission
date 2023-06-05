#pragma once
#include <string>
#include "SDL.h"
#include "SDL_main.h"
#include <map>



class TextureManager
{
public:
	
	static TextureManager* Instance();
	
	bool Load(std::string fileName, std::string id, SDL_Renderer* renderer);
	void Draw(std::string id,int x, int y,int width,int height,SDL_Renderer* renderer,SDL_RendererFlip flip);
	void DrawFrame(std::string id, int x, int y, int width, int height, SDL_Renderer* renderer ,int currentFrame,int currentRow, SDL_RendererFlip flip = SDL_FLIP_NONE);

	std::map<std::string, SDL_Texture*> textureMap;

private:
	TextureManager() {}
	~TextureManager() {};
	static TextureManager* single_Instance;

};

typedef TextureManager TheTextureManager;


