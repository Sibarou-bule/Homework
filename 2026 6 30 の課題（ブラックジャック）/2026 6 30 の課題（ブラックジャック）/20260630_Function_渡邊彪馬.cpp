#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_“nç²•V”n.h"
using namespace std;

void Game()
{
	srand((unsigned int)time(NULL));
	int PlayerSum = 0;
	int CpuSum = 0;

	int num;
	int Card[ConstNum::CARD_NUMBER];
	For(Card,ConstNum::CARD_NUMBER);
	
	Turn(PlayerSum,Card);
	cout << "‡Œv" << PlayerSum;
	Turn(CpuSum, Card);

	cout << "‚à‚¤ˆê“xˆø‚­H\n";
	while (true)
	{
		cin >> num;
		if (num < 0 || num>1)
		{
			cout << "‚à‚¤ˆê‰ñ\n";
		}
		else
		{
			break;
		}
	}
	if (num == 0)
	{
		Mouikkai(PlayerSum,Card);
	}
	cout << PlayerSum << endl;
	cout << CpuSum << endl;
}

void For(int card[], int max)
{
	int i;
	for (i = 0;i < max;i++)
	{
		int Number = i + 1;
		card[i] = Number;
	}
}

void Turn(int &SumNumber,int card[])
{
	int i;
	int draw[ConstNum::DRAW_CARD];
	int sum = 0;

	for (i = 0;i < ConstNum::DRAW_CARD;i++)
	{
		while (true)
		{
			draw[i] = rand() % ConstNum::CARD_NUMBER;
			draw[i] += 1;
			if (card[draw[i]] == -1)
			{

			}
			else
			{
				break;
			}
		}
		sum += draw[i];
		card[draw[i]] = -1;
	}
	SumNumber = sum;
}

void Mouikkai(int& SumNumber, int card[])
{
	int num;
	while (true)
	{
		num = rand() % ConstNum::CARD_NUMBER;
		if (card[num] == -1)
		{

		}
		else
		{
			break;
		}
	}
	SumNumber += num;
}