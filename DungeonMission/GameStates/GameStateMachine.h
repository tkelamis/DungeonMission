#pragma once
#include "../GameStates/GameState.h"
#include <vector>

class GameStateMachine
{
public:
	void PushState(GameState* pState);
	void ChangeState(GameState* pState);
	void PopState();
private:
	std::vector<GameState*> gameStates;
};

