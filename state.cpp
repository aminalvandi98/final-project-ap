#include "state.h"

using namespace std;


std::vector<way> state::whereIsWater(way input)
{
	int finded = 0;
	for (size_t i = 0; i < inputOutput.size(); i++)
	{
		if (inputOutput[i] == input)
		{
			finded = i;
		}

	}

	if (finded)
	{
		vector<way> answer = inputOutput;
		answer.erase(answer.begin() + finded);
		return answer;
	}
	else
	{

		return std::vector<way>();

	}
}

state::state(std::string address, std::vector<way> input)
	:addressOfPicture(address), inputOutput(input)
{
}

/*state::state(std::array<std::array<bool, 3>, 3> matrix, std::vector<std::string> input)
	:defineMatrix(matrix), inputOutput(input)
{
}*/

std::string state::getaddressOfPicture()
{
	return addressOfPicture;
}

/*std::array<std::array<bool, 3>, 3> state::getDefineMatrix()
{
	return this->defineMatrix;
}*/






