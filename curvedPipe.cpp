#include "curvedPipe.h"
#include "state.h"
#include "way.h"
#include <vector>
#include <array>
#include <string>

using namespace std;

void curvedPipe::createShape()
{
	/*array<array<bool, 3>, 3> createUR = {0,1,0,
										   0,1,1,
	                                       0,0,0};
	vector <string>stringUR;
	stringUR.push_back("UP");
	stringUR.push_back("RIGHT");
	myState.push_back(state(createUR, stringUR));
//------------------------------------------------------------
	array<array<bool, 3>, 3> createRD = { 0,0,0,
										  0,1,1,
										  0,1,0 };
	vector <string>stringRD;
	stringRD.push_back("RIGHT");
	stringRD.push_back("DOWN");
	myState.push_back(state(createRD, stringRD));
//------------------------------------------------------------
	array<array<bool, 3>, 3> createLD = { 0,0,0,
										  1,1,0,
										  0,1,0 };
	vector <string>stringLD;
	stringLD.push_back("LEFT");
	stringLD.push_back("DOWN");
	myState.push_back(state(createLD, stringLD));
//------------------------------------------------------------
	array<array<bool, 3>, 3> createUL = { 0,1,0,
										  1,1,0,
										  0,0,0 };
	vector <string>stringUL;
	stringUL.push_back("UP");
	stringUL.push_back("LEFT");
	myState.push_back(state(createUL, stringUL));*/
//------------------------------------------------------------

	string addressPipeUR = "L1.png";
	vector <way>UR;
	UR.push_back(way(0, -1)); // up
	UR.push_back(way(1, 0)); //right
	myState.push_back(state(addressPipeUR, UR));
//-----------------------------------------------------------------------
	string addressPipeRD = "L2.png";
	vector <way>RD;
	RD.push_back(way(1, 0)); // right
	RD.push_back(way(0, 1)); // down
	myState.push_back(state(addressPipeRD,RD));
//-----------------------------------------------------------------------
	string addressPipeLD = "L3.png";
	vector <way>LD;
	LD.push_back(way(-1, 0));//left
	LD.push_back(way(0, 1)); // down
	myState.push_back(state(addressPipeLD, LD));
//-----------------------------------------------------------------------
	string addressPipeUL = "L4.png";
	vector <way>UL;
	UL.push_back(way(0, -1)); // up
	UL.push_back(way(-1, 0)); // left
	myState.push_back(state(addressPipeUL, UL));
//-----------------------------------------------------------------------
	nowState = rand() % myState.size();

}

curvedPipe::curvedPipe()
{
	createShape();
}
