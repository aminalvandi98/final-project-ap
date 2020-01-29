#pragma once
#include "shape.h"

#ifndef DIRECTPIPE_H
#define DIRECTPIPE_H

class directPipe:public shape
{
public:
	void createShape()override;
};

#endif // !DIRECTPIPE_H
