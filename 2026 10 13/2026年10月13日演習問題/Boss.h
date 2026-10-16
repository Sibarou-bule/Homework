#pragma once
#include<iostream>
#include<string>
#include"Character.h"
class Boss:public Character
{
public:
	Boss(std::string name);

	void Attack()override;

};

