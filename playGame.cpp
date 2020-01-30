#include "playGame.h"

void playGame::assingGameBackground(std::array<std::array<shape*, 5>, 5> gBi, size_t n)
{
	if (n == 1)
	{
		gBi[0][0] = gBi[0][1] = gBi[3][1] = gBi[3][3] = gBi[4][3] = new curvedPipe();
		gBi[0][3] = gBi[0][4] = gBi[1][0] = gBi[1][1] = gBi[1][3] = gBi[1][4] = gBi[2][0] = gBi[2][1] = gBi[2][2] = gBi[2][3] = gBi[2][4] = gBi[3][0] = gBi[3][2] = gBi[4][1] = gBi[4][2] = gBi[4][4] = new directPipe();
		gBi[0][2] = gBi[1][2] = gBi[3][4] = gBi[4][0] = gBi[4][4] = new plusPipe();

	}
	else if (n == 2)
	{
		gBi[0][2] = gBi[0][3] = gBi[0][4] = gBi[1][1] = gBi[1][4] = gBi[2][1] = gBi[2][2] = gBi[2][4] = gBi[3][2] = new curvedPipe();
		gBi[0][0] = gBi[1][0] = gBi[1][2] = gBi[1][3] = gBi[3][0] = gBi[3][3] = gBi[3][4] = gBi[4][0] = gBi[4][1] = gBi[4][2] = gBi[4][3] = gBi[4][4] = new directPipe();
		gBi[0][1] = gBi[2][0] = gBi[2][3] = gBi[3][1] = new plusPipe();

	}
	else if (n == 3)
	{
		gBi[0][0] = gBi[0][3] = gBi[1][2] = gBi[2][2] = gBi[2][4] = gBi[3][1] = gBi[3][4] = gBi[4][0] = gBi[4][1] = gBi[4][2] = new curvedPipe();
		gBi[0][1] = gBi[0][2] = gBi[1][1] = gBi[1][3] = gBi[1][4] = gBi[2][0] = gBi[2][1] = gBi[2][3] = gBi[3][2] = gBi[3][3] = gBi[4][3] = gBi[4][4] = new directPipe();
		gBi[0][4] = gBi[1][0] = gBi[3][0] = new plusPipe();

	}
	else if (n == 4)
	{
		gBi[0][0] = gBi[0][2] = gBi[0][4] = gBi[1][4] = gBi[2][0] = gBi[2][1] = gBi[2][4] = gBi[3][0] = gBi[3][1] = gBi[3][2] =  gBi[3][4] = gBi[4][4] = new curvedPipe();
		gBi[0][1] = gBi[1][1] = gBi[1][2] = gBi[1][3] = gBi[2][2] = gBi[2][3] = gBi[3][3] = gBi[4][1] = gBi[4][0] = gBi[4][3] = new directPipe();
		gBi[0][3] = gBi[1][0] = gBi[4][2] = new plusPipe();

	}
	else if (n == 5)
	{
		gBi[0][1] = gBi[1][3] = gBi[2][1] = gBi[3][1] = gBi[3][2] = gBi[3][4] = gBi[4][0] = gBi[4][2] = gBi[4][4] = new curvedPipe();
		gBi[0][0] = gBi[0][2] = gBi[0][3] = gBi[1][0] = gBi[1][1] = gBi[1][4] = gBi[2][0] = gBi[2][3] = gBi[2][4] = gBi[3][0] = gBi[3][3] = gBi[4][1] = new directPipe();
		gBi[0][4] = gBi[1][2] = gBi[2][2] = gBi[4][3] = new plusPipe();

	}
	 

}

playGame::playGame()
{
}

playGame::~playGame()
{
}
