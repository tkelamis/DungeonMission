#pragma once
#include "../GameStates/GameState.h"

class MenuState : public GameState
{
public:
	virtual void Render();
	virtual void Update();
	virtual bool OnExit();
	virtual bool OnEnter();

	virtual std::string GetStateID() const { return p_menuID ; }

private:
	static const std::string p_menuID;

};

