#include "MenuState.h"
#include <iostream>


const std::string MenuState::p_menuID = "MENU";

void MenuState::Render()
{

}

void MenuState::Update()
{

}

bool MenuState::OnExit()
{
	std::cout << "Exiting MenuState\n";
	return true;
}

bool MenuState::OnEnter()
{
	std::cout<<"Entering MenuState\n";
	return true;
}



