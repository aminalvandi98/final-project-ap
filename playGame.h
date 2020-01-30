#pragma once
#include <array>
#include "shape.h"
#include "directPipe.h"
#include "plusPipe.h"
#include "curvedPipe.h"
#ifndef PLAYGAME_H
#define PLAYGAME_H

class playGame
{
public:
	std::array<std::array<shape*, 5>, 5> gameBackground;
	void assingGameBackground(std::array<std::array<shape*, 5>, 5>,size_t);
	playGame();
	~playGame();

	

	
};

#endif // !GAMEPLAY
