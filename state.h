#pragma once
#include "way.h"
#include <vector>
#include <string>
#include <array>
#ifndef STATE_H
#define STATE_H


class state
{
private:
	std::vector<way>inputOutput;
	std::string addressOfPicture;
	//std::array<std::array<bool, 3>, 3> defineMatrix;

public:
	std::vector<way>whereIsWater(way);
	state(std::string, std::vector<way>);
	std::string getaddressOfPicture();
	//state(std::array<std::array<bool, 3>, 3> , std::vector<std::string>);
	//std::array<std::array<bool, 3>, 3> getDefineMatrix();
};

#endif // !STATE_H
