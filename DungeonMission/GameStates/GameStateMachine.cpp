#include "GameStateMachine.h"

void GameStateMachine::PushState(GameState* pState)
{
	gameStates.push_back(pState);
	gameStates.back()->OnEnter();
}

void GameStateMachine::ChangeState(GameState* pState)
{
    if (!gameStates.empty())
    {
        if (gameStates.back()->GetStateID() == pState->GetStateID())
        {
            return; // do nothing
        }
        if (gameStates.back()->OnExit())
        {
            delete gameStates.back();
            gameStates.pop_back();
        }//edo exo meinei........!!!!!!!!!!!!!!!!!!!
    }
}

void GameStateMachine::PopState()
{
    if (gameStates.empty() != 0 )
    {
        if (gameStates.back()->OnExit())
        {
            delete gameStates.back();
            gameStates.pop_back();
        }
    }

}
