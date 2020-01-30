#pragma once
#include "shape.h"
#ifndef CURVEDPIPE_H
#define CURVEDPIPE_H

class curvedPipe:public shape
{
public:
	void createShape()override;
	curvedPipe();

};
#endif // !CURVEDPIPE_H

