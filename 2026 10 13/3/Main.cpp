#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"BattleManager.h"

using namespace std;

int main(void)
{
	Player player("matue");
	Enemy enemy("kotue");
	Boss boss("busue");

	BattleManager battleManager;

	//Character character("ooo");
	//cout << player.GetName() << endl;
	battleManager.StartBattle(&player);
	//player.Attack();

	//cout << enemy.GetName() << endl;
	battleManager.StartBattle(&enemy);
	//enemy.Attack();

	//cout << boss.GetName() << endl;
	battleManager.StartBattle(&boss);
	//boss.Attack();

	//character.Attack();

	return 0;
}