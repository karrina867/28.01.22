#pragma once
#include"SFML/Graphics.hpp"
class Ball {
protected:
	sf::CircleShape circle;
	sf::FloatRect hitbox; 
	float radius = 20.f;
	float speedx = 2.5f;
	float speedy = -2.5f;
	size_t left_score = 0;
	//size_t начинается с нуля,нет отрицацельных чисел
	size_t right_score = 0;
public:
	Ball();
	sf::CircleShape getShape();
	void update();
	sf::Vector2f getPosition();
	sf::FloatRect getHitBox();
	void reboundHorizontal();
	void reboundVertical();
	size_t getLeftScore();
	size_t getRightScore();
};