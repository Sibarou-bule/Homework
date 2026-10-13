#pragma once
#include"Character.h"
#include<string>
class Player:public Character
{
public:
	Player(std::string name);

	void Attack()override;
};

