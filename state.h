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

public:
	std::vector<way>whereIsWater(way);
	state(std::string, std::vector<way>);
	std::string getaddressOfPicture();
	
};

#endif // !STATE_H
