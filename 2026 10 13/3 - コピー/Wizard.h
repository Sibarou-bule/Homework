#pragma once
#include"Character.h"
#include"string"
class Wizard:public Character
{
public:
	Wizard(std::string name);

	void Attack()override;

};

