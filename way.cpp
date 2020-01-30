#include "way.h"



bool way::operator==(const way & Right) const
{
	return i == Right.i && j == Right.j;
}

way::way(int I, int J)
	:i(I),j(J)
{
}


way::~way()
{
}
