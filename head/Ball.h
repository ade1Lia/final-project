#pragma once
#include <SFML/Graphics.hpp>

namespace Game //�������� �������� ������������
{
	class Ball //�������� ������ 
	{
	public:

		int ncolor;
		std::vector<sf::Color> colors = { sf::Color::Red, sf::Color::Green, sf::Color::Magenta, sf::Color::Blue, sf::Color::Yellow, sf::Color::Cyan };
		sf::CircleShape shape;

		void Move(sf::RenderWindow& window);
		void ColorChange();
	};
}