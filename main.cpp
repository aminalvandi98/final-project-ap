#include <SFML\Audio.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Network.hpp>
#include <SFML\Window.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(1300,900), "Plumber Water Pipe Game", sf::Style::Titlebar | sf::Style::Close);
	Event ev;
	Texture IMG;
	if (!IMG.loadFromFile("BGP.png"))
		return -1;
	Sprite sp(IMG);

	while (window.isOpen())
	{
		while (window.pollEvent(ev))
		{

			switch (ev.type)
			{
				case Event::Closed:
					window.close();
				break;
				case Event ::KeyPressed:
					if (ev.key.code == Keyboard::Escape)
						window.close();
					break;
			}

		}

		window.clear();
		window.draw(sp);
		window.display();
		
	}
}
