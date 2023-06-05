#pragma once
#include "../GameStates/GameState.h"

class PlayState: public GameState
{
public:
	virtual void Render();
	virtual void Update();
	virtual bool OnExit();
	virtual bool OnEnter();

	virtual std::string GetStateID() const { return p_playID; }

private:
	static const std::string p_playID;
};

