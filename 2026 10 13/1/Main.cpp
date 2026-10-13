#include<iostream>
#include"Character.h"

using namespace std;

int main(void)
{
	Character character("ooo");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}