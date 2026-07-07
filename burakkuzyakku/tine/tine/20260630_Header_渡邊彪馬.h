#pragma once
namespace ConstNum
{
	const int CARD_NUMBER = 11;
	const int CARD_BOLL = 2;//オンオフ用
	const int CARD_ON = 0;
	const int CARD_OFF = 1;
	const int DRAW_CARD = 2;//最初に引く枚数
}


void Game();
void For(int card[], int max);
void Turn(int& SumNumber, int card[]);
void Mouikkai(int& SumNumber, int card[]);