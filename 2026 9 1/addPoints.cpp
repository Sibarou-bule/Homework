#include<iostream>
#include "addPoints.h"
using namespace std;

addPoints::addPoints(int *point)
{
	int num;
	cin >> num;
	*point += num;
}
