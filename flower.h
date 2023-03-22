#pragma once
#include<SFML/Graphics.hpp>
#include<random>

//class definition for Flower
class Flower {

private: //private stuff can only be seen/used by fellow class members

	//usually you keep variables private and functions public, but they can definitely not be that way too.
	int xpos;
	int ypos;
	int color[3]; //3-slot array to hold the Flower's color. Remember, C++ arrays are a lot like python lists.


	sf::CircleShape petal;
	sf::RectangleShape stem;

public: //public stuff can be seen/used by errpetals in the clurb

	//you *can* have the whole definitions here, but its best to have just the declarations unless they are super short
	Flower(int x, int y, int c[3]); //parameterized constructor
	void draw(sf::RenderWindow& window);
	void change(sf::RenderWindow& window);
};


