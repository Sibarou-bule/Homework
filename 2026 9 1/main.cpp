#include<iostream>
#include"addPoints.h"
#include"resetScore.h"
#include"updateHighScore.h"
#include"displayScores.h"

int main(void)
{
	int currentScore = 0;//現在のハイスコア
	int highScore = 0;//ハイスコア

	addPoints::addPoints(&currentScore);

	updateHighScore::updateHighScore(&currentScore, &highScore);

	displayScores::displayScores(currentScore, highScore);

	resetScore::resetScore(&currentScore, &highScore);
}