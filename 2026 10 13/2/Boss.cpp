#include "Boss.h"

Boss::Boss(std::string name)
	:Character(name){}

void Boss::Attack()
{
	std::cout << "kyouryoku na HissatuAttack" << std::endl;
}
