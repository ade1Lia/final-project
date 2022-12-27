#include <SFML/Graphics.hpp>

namespace Game
{
	class Ball
	{
	public:

		int ncolor = 0;
		std::vector<sf::Color> colors = { sf::Color::Red, sf::Color::Green, sf::Color::Magenta, sf::Color::Blue, sf::Color::Yellow, sf::Color::Cyan};
		sf::CircleShape shape;

		void Move(sf::RenderWindow &window)
		{
			shape.setPosition(sf::Vector2f(sf::Mouse::getPosition(window)) - sf::Vector2f(shape.getRadius(), shape.getRadius()));
		}
		
		void ColorChange()
		{
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				if (ncolor == colors.size())
				{
					ncolor = 0;
				}

				shape.setFillColor(colors[ncolor]);
				ncolor++;
			}
		}
	};
}