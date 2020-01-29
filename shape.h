#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
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
	//std::array<std::array<bool, 3>, 3> getMatrix();
	std::string getAddressOfPic();
	void rotation();
};

#endif // !SHAPE_H

