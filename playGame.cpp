#include "playGame.h"
#include <random>

using namespace std;
using namespace sf;

void playGame::assingGameBackground()
{
	int n = 1 + rand() % 5;
	if (n == 1)
	{
		gameBackground[0][0] = gameBackground[0][1] = gameBackground[3][1] = gameBackground[3][3] = gameBackground[4][3] = new curvedPipe();
		gameBackground[0][3] = gameBackground[0][4] = gameBackground[1][0] = gameBackground[1][1] = gameBackground[1][3] = gameBackground[1][4] = gameBackground[2][0] = gameBackground[2][1] = gameBackground[2][2] = gameBackground[2][3] = gameBackground[2][4] = gameBackground[3][0] = gameBackground[3][2] = gameBackground[4][1] = gameBackground[4][2] = gameBackground[4][4] = new directPipe();
		gameBackground[0][2] = gameBackground[1][2] = gameBackground[3][4] = gameBackground[4][0] = gameBackground[4][4] = new plusPipe();

	}
	else if (n == 2)
	{
		gameBackground[0][2] = gameBackground[0][3] = gameBackground[0][4] = gameBackground[1][1] = gameBackground[1][4] = gameBackground[2][1] = gameBackground[2][2] = gameBackground[2][4] = gameBackground[3][2] = new curvedPipe();
		gameBackground[0][0] = gameBackground[1][0] = gameBackground[1][2] = gameBackground[1][3] = gameBackground[3][0] = gameBackground[3][3] = gameBackground[3][4] = gameBackground[4][0] = gameBackground[4][1] = gameBackground[4][2] = gameBackground[4][3] = gameBackground[4][4] = new directPipe();
		gameBackground[0][1] = gameBackground[2][0] = gameBackground[2][3] = gameBackground[3][1] = new plusPipe();

	}
	else if (n == 3)
	{
		gameBackground[0][0] = gameBackground[0][3] = gameBackground[1][2] = gameBackground[2][2] = gameBackground[2][4] = gameBackground[3][1] = gameBackground[3][4] = gameBackground[4][0] = gameBackground[4][1] = gameBackground[4][2] = new curvedPipe();
		gameBackground[0][1] = gameBackground[0][2] = gameBackground[1][1] = gameBackground[1][3] = gameBackground[1][4] = gameBackground[2][0] = gameBackground[2][1] = gameBackground[2][3] = gameBackground[3][2] = gameBackground[3][3] = gameBackground[4][3] = gameBackground[4][4] = new directPipe();
		gameBackground[0][4] = gameBackground[1][0] = gameBackground[3][0] = new plusPipe();

	}
	else if (n == 4)
	{
		gameBackground[0][0] = gameBackground[0][2] = gameBackground[0][4] = gameBackground[1][4] = gameBackground[2][0] = gameBackground[2][1] = gameBackground[2][4] = gameBackground[3][0] = gameBackground[3][1] = gameBackground[3][2] =  gameBackground[3][4] = gameBackground[4][4] = new curvedPipe();
		gameBackground[0][1] = gameBackground[1][1] = gameBackground[1][2] = gameBackground[1][3] = gameBackground[2][2] = gameBackground[2][3] = gameBackground[3][3] = gameBackground[4][1] = gameBackground[4][0] = gameBackground[4][3] = new directPipe();
		gameBackground[0][3] = gameBackground[1][0] = gameBackground[4][2] = new plusPipe();

	}
	else if (n == 5)
	{
		gameBackground[0][1] = gameBackground[1][3] = gameBackground[2][1] = gameBackground[3][1] = gameBackground[3][2] = gameBackground[3][4] = gameBackground[4][0] = gameBackground[4][2] = gameBackground[4][4] = new curvedPipe();
		gameBackground[0][0] = gameBackground[0][2] = gameBackground[0][3] = gameBackground[1][0] = gameBackground[1][1] = gameBackground[1][4] = gameBackground[2][0] = gameBackground[2][3] = gameBackground[2][4] = gameBackground[3][0] = gameBackground[3][3] = gameBackground[4][1] = new directPipe();
		gameBackground[0][4] = gameBackground[1][2] = gameBackground[2][2] = gameBackground[4][3] = new plusPipe();

	}
	 

}

void playGame::statrtPage()
{
	RenderWindow window(VideoMode(1280, 891), "Plumber Water Pipe Game", Style::Titlebar | Style::Close);
	Texture IMG;
	if (!IMG.loadFromFile("BGP.png"))
	{
		return;
	}
	Sprite sprite1(IMG);

	while (window.isOpen())
	{
		Event ev;
		while (window.pollEvent(ev))
		{

			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (ev.key.code == Keyboard::Escape)
					window.close();
				break;
			}

			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 49 && ev.mouseButton.x <= 170) && (ev.mouseButton.y >= 725 && ev.mouseButton.y <= 852))
				{
					window.close();
					aboutPage();

				}
			}
			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 554 && ev.mouseButton.x <= 731) && (ev.mouseButton.y >= 250 && ev.mouseButton.y <= 428))
				{
					window.close();
					gamePage();
				}
			}

		}

		window.clear();
		window.draw(sprite1);
		window.display();

	}
}

void playGame::aboutPage()
{
	RenderWindow window(VideoMode(1254, 684), "Plumber Water Pipe Game(About Page)", sf::Style::Titlebar | sf::Style::Close);

	Texture IMGabout;
	if (!IMGabout.loadFromFile("about.png"))
		return;
	Sprite sp(IMGabout);
	while (window.isOpen())
	{
		Event ev;
		while (window.pollEvent(ev))
		{

			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (ev.key.code == Keyboard::Escape)
					window.close();
				break;
			}

			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 90 && ev.mouseButton.x <= 150) && (ev.mouseButton.y >= 10 && ev.mouseButton.y <= 70))
				{
					window.close();
					this->statrtPage();

				}
			}

		}

		window.clear();
		window.draw(sp);
		window.display();
	}
}

void playGame::gamePage()
{
	RenderWindow window(VideoMode(685, 800), "Plumber Water Pipe Game(Game Page)", sf::Style::Titlebar | sf::Style::Close);

	Texture IMGgamePage;
	if (!IMGgamePage.loadFromFile("BG.png"))
		return;
	Sprite sp(IMGgamePage);
	while (window.isOpen())
	{
		Event ev;
		while (window.pollEvent(ev))
		{

			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (ev.key.code == Keyboard::Escape)
					window.close();
				break;
			}

			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 606 && ev.mouseButton.x <= 663) && (ev.mouseButton.y >= 14 && ev.mouseButton.y <= 57))
				{
					window.close();
					this->statrtPage();

				}
			}

		}
		/*while (k != 1)
		{
			for (size_t i = 150; i <= 657; i += 101.1)
			{
				for (size_t j = 87; j <= 594; j += 101.1)
				{

				}
			}
		}*/






		window.clear();
		window.draw(sp);
		window.display();
	}

}

playGame::playGame()
{
}

playGame::~playGame()
{
}
