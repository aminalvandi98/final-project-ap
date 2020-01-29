#pragma once
#include <iostream>
#include <string>
#ifndef SHAPE_H
#define SHAPE_H


class shape
{
private:
	bool up;
	bool down;
	bool left;
	bool right;
public:
	virtual void setX(unsigned int &) = 0;
	virtual void setY(unsigned int &) = 0;
	virtual unsigned int getX() = 0;
	virtual unsigned int getY() = 0;
	virtual std::string getStringName() = 0;
	virtual unsigned int getID() = 0;

	shape();
	~shape();
};

#endif // !SHAPE_H

