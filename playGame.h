#pragma once
#include "shape.h"
#include "directPipe.h"
#include "plusPipe.h"
#include "curvedPipe.h"
#include <array>
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
	void rotate();
	void freeObj();
	~playGame();

	

	
};

#endif // !GAMEPLAY
