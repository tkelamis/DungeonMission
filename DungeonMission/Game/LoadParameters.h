#pragma once
#include <string>
class LoadParameters
{
public:
	LoadParameters(int x, int y, int width, int height, std::string
		textureID)
	{
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;
		this->textureID = textureID;
	}

	int getX() const { return x; }
	int getY() const { return y; }
	int getWidth() const { return width; }
	int getHeight() const { return height; }
	std::string getTextureID() const { return textureID; }

private:
	int x;
	int y;
	int width;
	int height;
	std::string textureID;


};

