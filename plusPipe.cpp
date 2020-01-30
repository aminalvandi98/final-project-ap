#include "plusPipe.h"
#include "state.h"
#include "way.h"
#include <vector>
#include <array>
#include <string>
#include <random>

using namespace std;

void plusPipe::createShape()
{
	/*array<array<bool, 3>, 3> createUDLR = { 0,1,0,
										    1,1,1,
										    0,1,0 };
	vector <string>stringUDLR;
	stringUDLR.push_back("UP");
	stringUDLR.push_back("DOWN");
	stringUDLR.push_back("LEFT");
	stringUDLR.push_back("RIGHT");

	myState.push_back(state(createUDLR, stringUDLR));*/
//-----------------------------------------------------------------------
	string addressPipeUDLR = "plus.png";
	vector <way>UDLR;
	UDLR.push_back(way(0, -1)); //up
	UDLR.push_back(way(0, 1)); //down
	UDLR.push_back(way(-1,0)); //left
	UDLR.push_back(way(1, 0)); // right

	myState.push_back(state(addressPipeUDLR, UDLR));
	nowState = rand() % myState.size();
}

plusPipe::plusPipe()
{
	createShape();
}
