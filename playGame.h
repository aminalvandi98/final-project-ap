#pragma once
#include <array>
#include "shape.h"
#include "directPipe.h"
#include "plusPipe.h"
#include "curvedPipe.h"
#include <SFML\Audio.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Network.hpp>
#include <SFML\Window.hpp>
#ifndef PLAYGAME_H
#define PLAYGAME_H

class playGame
{
	std::array<std::array<shape*, 5>, 5> gameBackground;
public:
	void assingGameBackground();
	void statrtPage();
	void aboutPage();
	void gamePage();
	playGame();
	~playGame();

	

	
};

#endif // !GAMEPLAY
