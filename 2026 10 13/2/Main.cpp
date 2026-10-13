#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"

using namespace std;

int main(void)
{
	Player player("matue");
	Enemy enemy("kotue");
	Boss boss("busue");



	//Character character("ooo");
	cout << player.GetName() << endl;
	player.Attack();

	cout << enemy.GetName() << endl;
	enemy.Attack();

	cout << boss.GetName() << endl;
	boss.Attack();

	//character.Attack();

	return 0;
}