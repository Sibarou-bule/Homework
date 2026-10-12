#include "updateHighScore.h"

updateHighScore::updateHighScore(int *currentScore, int *highScore)
{
	if (*currentScore > *highScore)
	{
		*highScore = *currentScore;
	}
}
