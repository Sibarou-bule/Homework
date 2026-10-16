#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"BattleManager.h"
#include"Wizard.h"

using namespace std;

int main(void)
{
	Player player("matue");
	Enemy enemy("kotue");
	Boss boss("busue");
	Wizard wizard("masuo");

	BattleManager battleManager;

	//Character character("ooo");
	//cout << player.GetName() << endl;
	battleManager.StartBattle(&player);
	//player.Attack();

	//cout << enemy.GetName() << endl;
	battleManager.StartBattle(&enemy);
	//enemy.Attack();

	battleManager.StartBattle(&wizard);

	//cout << boss.GetName() << endl;
	battleManager.StartBattle(&boss);
	//boss.Attack();

	//character.Attack();

	return 0;
}