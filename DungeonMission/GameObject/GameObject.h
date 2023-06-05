#pragma once
#include "../Game/LoadParameters.h"

class IGameObject
{
public:

	virtual void Draw()=0;
	virtual void Update()=0;
	virtual void clean()=0;

protected:
	
	IGameObject(const LoadParameters* Parameters) {}
	virtual ~IGameObject() {}
};

