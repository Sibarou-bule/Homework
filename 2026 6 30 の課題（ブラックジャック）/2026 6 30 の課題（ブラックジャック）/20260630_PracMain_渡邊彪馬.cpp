//ブラックジャック
#include<iostream>
#include"20260630_Header_渡邊彪馬.h"
using namespace std;

int main(void)
{
	cout << "ブラックジャックゲーム\n";
	cout << "2枚以上のカードで21に近づけたら勝ちです。\n";
	cout << "数字が1～11までのカードを2枚受け取ります。\n";
	cout << "22以上になってしまったらゲームに敗北\n";

	cout << "=============GameStrat=================\n";
	Game();
}