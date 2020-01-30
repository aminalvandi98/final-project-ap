#pragma once
#ifndef WAY_H
#define WAY_H

class way
{
public:
	int i;
	int j;
public:
	bool operator== (const way&) const;
	way(int,int);
	~way();
};
#endif // !WAY_H

