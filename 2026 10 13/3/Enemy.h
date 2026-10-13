#pragma once
#include<iostream>
#include<string>
#include"Character.h"
class Enemy:public Character
{
public:
	Enemy(std::string name);

	void Attack()override;
};

