#include "plusPipe.h"
#include "state.h"
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
	vector <string>stringUDLR;
	stringUDLR.push_back("UP");
	stringUDLR.push_back("DOWN");
	stringUDLR.push_back("LEFT");
	stringUDLR.push_back("RIGHT");

	myState.push_back(state(addressPipeUDLR, stringUDLR));
	nowState = rand() % myState.size();
}

plusPipe::plusPipe()
{
	createShape();
}
