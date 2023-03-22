#include"Flower.h"

//function definition for constructor
Flower::Flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

void Flower::change(sf::RenderWindow& window) {

	//stem
	stem.setPosition(xpos + 13, ypos + 35);
	stem.setFillColor(sf::Color(rand() % 255, rand() % 255, rand() % 255 ));
	stem.setSize(sf::Vector2f(15, 60));
	window.draw(stem);

	//petals
	petal.setRadius(15);
	petal.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255))); //black
	petal.setPosition(xpos + 5, ypos + 20);
	window.draw(petal); //bottom petal
	petal.setPosition(xpos + 23, ypos + 10);
	window.draw(petal); //bottom right petal
	petal.setPosition(xpos - 12, ypos + 10);
	window.draw(petal); // bottom left petal

	petal.setPosition(xpos + 5, ypos - 20);
	window.draw(petal); //top petal
	petal.setPosition(xpos - 12, ypos - 10);
	window.draw(petal); //top left petal
	petal.setPosition(xpos + 23, ypos - 10);
	window.draw(petal); //top right petal

	//center 
	petal.setRadius(15);
	petal.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255))); //noticing accessing slots of an array is just like getting to slots of a list
	petal.setPosition(xpos + 5, ypos);
	window.draw(petal);


}
//function definition for draw
void Flower::draw(sf::RenderWindow& window) {

	//stem
	stem.setPosition(xpos + 13, ypos + 35);
	stem.setFillColor(sf::Color(0, 255, 0));
	stem.setSize(sf::Vector2f(15, 60));
	window.draw(stem); 
	
	//petals
	petal.setRadius(15);
	petal.setFillColor((sf::Color(color[0], color[1], color[2]))); //black
	petal.setPosition(xpos + 5, ypos + 20);
	window.draw(petal); //bottom petal
	petal.setPosition(xpos + 23, ypos + 10);
	window.draw(petal); //bottom right petal
	petal.setPosition(xpos - 12, ypos + 10);
	window.draw(petal); // bottom left petal

	petal.setPosition(xpos + 5, ypos - 20);
	window.draw(petal); //top petal
	petal.setPosition(xpos - 12, ypos - 10);
	window.draw(petal); //top left petal
	petal.setPosition(xpos + 23, ypos - 10);
	window.draw(petal); //top right petal

	//center 
	petal.setRadius(15);
	petal.setFillColor((sf::Color(255, 255, 0))); //noticing accessing slots of an array is just like getting to slots of a list
	petal.setPosition(xpos + 5, ypos);
	window.draw(petal);

}
