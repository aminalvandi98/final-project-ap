#include "shape.h"



/*std::array<std::array<bool, 3>, 3> shape::getMatrix()
{
	return myState[nowState].getDefineMatrix;
}*/

std::string shape::getAddressOfPic()
{
	return myState[nowState].getaddressOfPicture;
}

void shape::rotation()
{
	nowState = (nowState + 1) % myState.size();
}



