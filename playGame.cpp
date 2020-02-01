#include "playGame.h"
#include <random>

using namespace std;
using namespace sf;
int k = 0;
void playGame::assingGameBackground()
{
	int n = 1 + rand() % 5;
	cout << n << endl;
	if (n == 1)
	{
		gameBackground[0][0] = new curvedPipe();
		gameBackground[0][1] = new curvedPipe();
		gameBackground[3][1] = new curvedPipe();
		gameBackground[3][3] = new curvedPipe();
		gameBackground[4][3] = new curvedPipe();
		
		gameBackground[0][3] = new directPipe();
		gameBackground[0][4] = new directPipe();
		gameBackground[1][0] = new directPipe();
		gameBackground[1][1] = new directPipe();
		gameBackground[1][3] = new directPipe();
		gameBackground[1][4] = new directPipe();
		gameBackground[2][0] = new directPipe();
		gameBackground[2][1] = new directPipe();
		gameBackground[2][2] = new directPipe();
		gameBackground[2][3] = new directPipe();
		gameBackground[2][4] = new directPipe();
		gameBackground[3][0] = new directPipe();
		gameBackground[3][2] = new directPipe();
		gameBackground[4][1] = new directPipe();
		gameBackground[4][2] = new directPipe();
		gameBackground[4][4] = new directPipe();
		
		gameBackground[0][2] = new plusPipe();
		gameBackground[1][2] = new plusPipe();
		gameBackground[3][4] = new plusPipe();
		gameBackground[4][0] = new plusPipe();
		

	}
	else if (n == 2)
	{
		gameBackground[0][2] = new curvedPipe();
		gameBackground[0][3] = new curvedPipe();
		gameBackground[0][4] = new curvedPipe();
		gameBackground[1][1] = new curvedPipe();
		gameBackground[1][4] = new curvedPipe();
		gameBackground[2][1] = new curvedPipe();
		gameBackground[2][2] = new curvedPipe();
		gameBackground[2][4] = new curvedPipe();
		gameBackground[3][2] = new curvedPipe();
		
		gameBackground[0][0] = new directPipe();
		gameBackground[1][0] = new directPipe();
		gameBackground[1][2] = new directPipe();
		gameBackground[1][3] = new directPipe();
		gameBackground[3][0] = new directPipe();
		gameBackground[3][3] = new directPipe();
		gameBackground[3][4] = new directPipe();
		gameBackground[4][0] = new directPipe();
		gameBackground[4][1] = new directPipe();
		gameBackground[4][2] = new directPipe();
		gameBackground[4][3] = new directPipe();
		gameBackground[4][4] = new directPipe();
		
		gameBackground[0][1] = new plusPipe();
		gameBackground[2][0] = new plusPipe();
		gameBackground[2][3] = new plusPipe();
		gameBackground[3][1] = new plusPipe();
		

	}
	else if (n == 3)
	{
		gameBackground[0][0] = new curvedPipe();
		gameBackground[0][3] = new curvedPipe();
		gameBackground[1][2] = new curvedPipe();
		gameBackground[2][2] = new curvedPipe();
		gameBackground[2][4] = new curvedPipe();
		gameBackground[3][1] = new curvedPipe();
		gameBackground[3][4] = new curvedPipe();
		gameBackground[4][0] = new curvedPipe();
		gameBackground[4][1] = new curvedPipe();
		gameBackground[4][2] = new curvedPipe();
		
		gameBackground[0][1] = new directPipe();
		gameBackground[0][2] = new directPipe();
		gameBackground[1][1] = new directPipe();
		gameBackground[1][3] = new directPipe();
		gameBackground[1][4] = new directPipe();
		gameBackground[2][0] = new directPipe();
		gameBackground[2][1] = new directPipe();
		gameBackground[2][3] = new directPipe();
		gameBackground[3][2] = new directPipe();
		gameBackground[3][3] = new directPipe();
		gameBackground[4][3] = new directPipe();
		gameBackground[4][4] = new directPipe();
		
		gameBackground[0][4] = new plusPipe();
		gameBackground[1][0] = new plusPipe();
		gameBackground[3][0] = new plusPipe();
		

	}
	else if (n == 4)
	{
		gameBackground[0][0] = new curvedPipe();
		gameBackground[0][2] = new curvedPipe();
		gameBackground[0][4] = new curvedPipe();
		gameBackground[1][4] = new curvedPipe();
		gameBackground[2][0] = new curvedPipe();
		gameBackground[2][1] = new curvedPipe();
		gameBackground[2][4] = new curvedPipe();
		gameBackground[3][0] = new curvedPipe();
		gameBackground[3][1] = new curvedPipe();
		gameBackground[3][2] = new curvedPipe();
		gameBackground[3][4] = new curvedPipe();
		gameBackground[4][4] = new curvedPipe();
		
		gameBackground[0][1] = new directPipe();
		gameBackground[1][1] = new directPipe();
		gameBackground[1][2] = new directPipe();
		gameBackground[1][3] = new directPipe();
		gameBackground[2][2] = new directPipe();
		gameBackground[2][3] = new directPipe();
		gameBackground[3][3] = new directPipe();
		gameBackground[4][1] = new directPipe();
		gameBackground[4][0] = new directPipe();
		gameBackground[4][3] = new directPipe();
		
		gameBackground[0][3] = new plusPipe();
		gameBackground[1][0] = new plusPipe();
		gameBackground[4][2] = new plusPipe();
		

	}
	else if (n == 5)
	{
		gameBackground[0][1] = new curvedPipe();
		gameBackground[1][3] = new curvedPipe();
		gameBackground[2][1] = new curvedPipe();
		gameBackground[3][1] = new curvedPipe();
		gameBackground[3][2] = new curvedPipe();
		gameBackground[3][4] = new curvedPipe();
		gameBackground[4][0] = new curvedPipe();
		gameBackground[4][2] = new curvedPipe();
		gameBackground[4][4] = new curvedPipe();
		
		gameBackground[0][0] = new directPipe();
		gameBackground[0][2] = new directPipe();
		gameBackground[0][3] = new directPipe();
		gameBackground[1][0] = new directPipe();
		gameBackground[1][1] = new directPipe();
		gameBackground[1][4] = new directPipe();
		gameBackground[2][0] = new directPipe();
		gameBackground[2][3] = new directPipe();
		gameBackground[2][4] = new directPipe();
		gameBackground[3][0] = new directPipe();
		gameBackground[3][3] = new directPipe();
		gameBackground[4][1] = new directPipe();
		
		gameBackground[0][4] = new plusPipe();
		gameBackground[1][2] = new plusPipe();
		gameBackground[2][2] = new plusPipe();
		gameBackground[4][3] = new plusPipe();
		
		
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
	
	Music music;
	music.openFromFile("Untitled Session 1_mixdown.wav");
	music.play();
	

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
					music.pause();
					aboutPage();


				}
			}
			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 554 && ev.mouseButton.x <= 731) && (ev.mouseButton.y >= 250 && ev.mouseButton.y <= 428))
				{
					window.close();
					music.pause();
					gamePage();
					

				}
			}
			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 790 && ev.mouseButton.x <= 918) && (ev.mouseButton.y >= 270 && ev.mouseButton.y <= 400))
				{
					
					music.pause();
					
					
				}
			}
			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 1110 && ev.mouseButton.x <= 1238) && (ev.mouseButton.y >= 720 && ev.mouseButton.y <= 849) )
				{
						music.play();
					
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
	if (!IMGgamePage.loadFromFile("BG.png")) cout << "not load pic" << endl;
		
	Sprite sp(IMGgamePage);
	
	while (window.isOpen())
	{
		Event ev;
		window.clear();
		window.draw(sp);
		
		
		
			while (k != 1)
			{
				float i = 150;
				for (int w = 0; w < 5 ;w++, i += 101.1)
				{
					float j = 87;
					for ( int z = 0; z < 5 ;z++, j += 101.1)
					{
						Texture t;
						t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
						cout << j << "\t" << i << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
						Sprite s(t);
						s.setPosition(j, i);
						window.draw(s);
					}
				}
				k++;
				window.display();

			}
			


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


					case Event::MouseButtonPressed:
						switch (ev.key.code)
						{
						case Mouse::Left:
							//-------------------------------------------------------------------------------------------------------------------
							if ((Mouse::getPosition(window).x >= 87 && Mouse::getPosition(window).x <= 188.1) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
									
									gameBackground[0][0]->rotation();
									cout << "*** " << gameBackground[0][0]->getAddressOfPic() << endl;
									Texture t;
									t.loadFromFile(gameBackground[0][0]->getAddressOfPic());
									//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
									Sprite s(t);
									s.setPosition(87, 150);
									window.draw(s);
									float i = 150;
									for (int w = 0; w < 5; w++, i += 101.1)
									{
										float j = 87;
										for (int z = 0; z < 5; z++, j += 101.1)
										{
											Texture t;
											t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
											cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
											Sprite s(t);
											s.setPosition(j, i);
											window.draw(s);
										}
									}
									window.display();
							}
							//-------------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 188.1 && Mouse::getPosition(window).x <= 289.2) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][1]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][1]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][1]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(188.1, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//-----------------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][2]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 390.3 && Mouse::getPosition(window).x <= 491.4) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][3]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][3]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][3]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(390.3, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 491.4 && Mouse::getPosition(window).x <= 592.5) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][4]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][4]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][4]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(491.4, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 87 && Mouse::getPosition(window).x <= 188.1) && (Mouse::getPosition(window).y >= 251.1 && Mouse::getPosition(window).y <= 352.2))
							{
								gameBackground[1][0]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[1][0]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[1][0]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(87, 251.1);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 188.1 && Mouse::getPosition(window).x <= 289.2) && (Mouse::getPosition(window).y >= 251.1 && Mouse::getPosition(window).y <= 352.2))
							{
								gameBackground[1][1]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[1][1]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[1][1]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(188.1, 251.1);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 251.1 && Mouse::getPosition(window).y <= 352.2))
							{
								gameBackground[1][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[1][2]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[1][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 251.1);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 390.3 && Mouse::getPosition(window).x <= 491.4) && (Mouse::getPosition(window).y >= 251.1 && Mouse::getPosition(window).y <= 352.2))
							{
								gameBackground[1][3]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[1][3]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[1][3]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(390.3, 251.1);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 491.4 && Mouse::getPosition(window).x <= 592.5) && (Mouse::getPosition(window).y >= 251.1 && Mouse::getPosition(window).y <= 352.2))
							{
								gameBackground[1][4]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[1][4]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[1][4]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(491.4, 251.1);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 87 && Mouse::getPosition(window).x <= 188.1) && (Mouse::getPosition(window).y >= 352.2 && Mouse::getPosition(window).y <= 453.3))
							{
								gameBackground[2][0]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[2][0]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[2][0]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(87, 352.2);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 188.1 && Mouse::getPosition(window).x <= 289.2) && (Mouse::getPosition(window).y >= 352.2 && Mouse::getPosition(window).y <= 453.3))
							{
								gameBackground[2][1]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[2][1]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[2][1]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(188.1, 352.2);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 352.2 && Mouse::getPosition(window).y <= 453.3))
							{
								gameBackground[2][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[2][2]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[2][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 352.2);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 390.3 && Mouse::getPosition(window).x <= 491.4) && (Mouse::getPosition(window).y >= 352.2 && Mouse::getPosition(window).y <= 453.3))
							{
								gameBackground[2][3]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[2][3]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[2][3]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(390.3, 352.2);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 491.4 && Mouse::getPosition(window).x <= 592.5) && (Mouse::getPosition(window).y >= 352.2 && Mouse::getPosition(window).y <= 453.3))
							{
								gameBackground[2][4]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[2][4]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[2][4]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(491.4, 352.2);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 87 && Mouse::getPosition(window).x <= 188.1) && (Mouse::getPosition(window).y >= 453.3 && Mouse::getPosition(window).y <= 554.4))
							{
								gameBackground[3][0]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[3][0]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[3][0]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(87, 453.3);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 188.1 && Mouse::getPosition(window).x <= 289.2) && (Mouse::getPosition(window).y >= 453.3 && Mouse::getPosition(window).y <= 554.4))
							{
								gameBackground[3][1]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[3][1]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[3][1]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(188.1, 453.3);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 453.3 && Mouse::getPosition(window).y <= 554.4))
							{
								gameBackground[3][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[3][2]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[3][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 453.3);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 390.3 && Mouse::getPosition(window).x <= 491.4) && (Mouse::getPosition(window).y >= 453.3 && Mouse::getPosition(window).y <= 554.4))
							{
								gameBackground[3][3]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[3][3]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[3][3]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(390.3, 453.3);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 491.4 && Mouse::getPosition(window).x <= 592.5) && (Mouse::getPosition(window).y >= 453.3 && Mouse::getPosition(window).y <= 554.4))
							{
								gameBackground[3][4]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[3][4]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[3][4]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(491.4, 453.3);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 87 && Mouse::getPosition(window).x <= 188.1) && (Mouse::getPosition(window).y >= 554.4 && Mouse::getPosition(window).y <= 655.5 ))
							{
								gameBackground[4][0]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[4][0]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[4][0]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(87, 554.4);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 188.1 && Mouse::getPosition(window).x <= 289.2) && (Mouse::getPosition(window).y >= 554.4 && Mouse::getPosition(window).y <= 655.5))
							{
								gameBackground[4][1]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[4][1]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[4][1]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(188.1, 554.4);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 554.4 && Mouse::getPosition(window).y <= 655.5))
							{
								gameBackground[4][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[4][2]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[4][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 554.4);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 390.3 && Mouse::getPosition(window).x <= 491.4) && (Mouse::getPosition(window).y >= 554.4 && Mouse::getPosition(window).y <= 655.5))
							{
								gameBackground[4][3]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[4][3]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[4][3]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(390.3, 554.4);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 491.4 && Mouse::getPosition(window).x <= 592.5) && (Mouse::getPosition(window).y >= 554.4 && Mouse::getPosition(window).y <= 655.5))
							{
								gameBackground[4][4]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[4][4]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[4][4]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(491.4, 554.4);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------


							
							break;
						}

				}
				
				if(ev.mouseButton.button == Mouse::Left)
				{
					if ((ev.mouseButton.x >= 606 && ev.mouseButton.x <= 663) && (ev.mouseButton.y >= 14 && ev.mouseButton.y <= 57))
					{
						window.close();
						k = 0;
						freeObj();
						assingGameBackground();
						statrtPage();

					}
				}

		}




	}


}


void playGame::freeObj()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << i << "  " << j << endl;
			shape* temp = gameBackground[i][j];
			delete temp;
			gameBackground[i][j] = nullptr;
			

		}
	}

}

playGame::~playGame()
{

	freeObj();

}



