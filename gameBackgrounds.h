#pragma once
#include "playGame.h"
#include <array>
#ifndef GAMEBACKGROUNDS
#define GAMEBACKGROUNDS


class gameBackgrounds
{
private:
	std::array<playGame, 5>_gameBackgrounds;
public:
	gameBackgrounds();
	~gameBackgrounds();
};

#endif // !GAMEBACKGROUNDS
