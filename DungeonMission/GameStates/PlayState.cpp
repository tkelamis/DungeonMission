#include "PlayState.h"
#include <iostream>

const std::string PlayState::p_playID = "PLAY";

void PlayState::Render()
{
}

void PlayState::Update()
{
}

bool PlayState::OnExit()
{
	std::cout << "Exiting PlayState\n";
	return true;
}

bool PlayState::OnEnter()
{
	std::cout << "Entering PlayState\n";
	return true;
}
