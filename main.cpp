#include <SFML\Audio.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Network.hpp>
#include <SFML\Window.hpp>

using namespace std;
using namespace sf;
void aboutPage();
void startPage();
void gamePage();


int main()
{
	startPage();
	return 0;
	
}

void aboutPage()
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
					startPage();

				}
			}

		}

		window.clear();
		window.draw(sp);
		window.display();
	}

}

void startPage()
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

void gamePage()
{
	RenderWindow window(VideoMode(685,800 ), "Plumber Water Pipe Game(Game Page)", sf::Style::Titlebar | sf::Style::Close);

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
					startPage();

				}
			}

		}

		window.clear();
		window.draw(sp);
		window.display();
	}


}