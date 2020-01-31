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
	int nowState;
	std::vector<state>myState;
	
public:
	virtual void createShape() = 0;
	std::string getAddressOfPic();
	void rotation();
	state getStatenow();
};

#endif // !SHAPE_H

