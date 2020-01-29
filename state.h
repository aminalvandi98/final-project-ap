#pragma once
#include <vector>
#include <string>
#include <array>
#ifndef STATE_H
#define STATE_H


class state
{
private:
	std::vector<std::string>inputOutput;
	//std::array<std::array<bool, 3>, 3> defineMatrix;
	std::string addressOfPicture;

public:
	std::vector<std::string>whereIsWater(std::string);
	//state(std::array<std::array<bool, 3>, 3> , std::vector<std::string>);
	state(std::string, std::vector<std::string>);
	//std::array<std::array<bool, 3>, 3> getDefineMatrix();
	std::string getaddressOfPicture();
};

#endif // !STATE_H
