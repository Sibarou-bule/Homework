#include "Enemy.h"

Enemy::Enemy(std::string name)
	:Character(name){}

void Enemy::Attack()
{
	std::cout << "KamitukiAttack" << std::endl;
}