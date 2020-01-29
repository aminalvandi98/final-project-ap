#include "directPipe.h"
#include "state.h"
#include <vector>
#include <array>
#include <string>

using namespace std;

void directPipe::createShape()
{
	/*array<array<bool, 3>, 3> createUD = { 0,1,0,
										  0,1,0,
						       		   	  0,1,0 };
	vector <string>stringUD;
	stringUD.push_back("UP");
	stringUD.push_back("DOWN");
	myState.push_back(state(createUD, stringUD));
//-------------------------------------------------------------
	array<array<bool, 3>, 3> createLR = { 0,0,0,
										  1,1,1,
										  0,0,0 };
	vector <string>stringLR;
	stringLR.push_back("LEFT");
	stringLR.push_back("RIGHT");
	myState.push_back(state(createLR, stringLR));*/
//---------------------------------------------------------------
	string addressPipeUD = "column.png";
	vector <string>stringUD;
	stringUD.push_back("UP");
	stringUD.push_back("DOWN");
	myState.push_back(state(addressPipeUD, stringUD));
//---------------------------------------------------------------
	string addressPipeLR = "row.png";
	vector <string>stringLR;
	stringLR.push_back("LEFT");
	stringLR.push_back("RIGHT");
	myState.push_back(state(addressPipeLR, stringLR));


}
