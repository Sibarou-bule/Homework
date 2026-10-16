#include "Player.h"
#include<iostream>

Player::Player(std::string name)
	:Character(name){}

void Player::Attack()
{
	std::cout << "ken Attack!" << std::endl;
}