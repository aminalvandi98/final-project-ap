#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include "state.h"
#ifndef SHAPE_H
#define SHAPE_H


class shape
{
protected:
	std::vector<state>myState;
	int nowState;
	
public:
	virtual void createShape() = 0;
	std::string getAddressOfPic();
	void rotation();
	state getStatenow();
	//std::array<std::array<bool, 3>, 3> getMatrix();
};

#endif // !SHAPE_H

