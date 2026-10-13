#pragma once
#include<string>
#include"BattleManager.h"
class Character
{
private:
	std::string name;
public:
	Character(std::string name);

	std::string GetName();

	virtual void Attack();
};

