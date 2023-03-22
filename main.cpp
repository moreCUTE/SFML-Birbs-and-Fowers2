#include<SFML/Graphics.hpp>
#include "birb.h"
#include "flower.h"

int main() {
	
	//this next line is an array. Arrays are a lot like python lists.
	int birbColor1[] = { 234, 230, 202 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 217, 80, 48 };
	int birbColor3[] = { 230, 50, 68 };
	int birbColor4[] = { 161, 35, 18 };
	int birbColor5[] = { 63, 136, 143 };

	int flowerColor1[] = { 73, 126, 118 };
	int flowerColor2[] = { 132, 195, 190 };
	int flowerColor3[] = { 179, 36, 40 };
	int flowerColor4[] = { 230, 50, 68 };

	birb Alex(300, 600, birbColor1); //instantiate 1 birb
	birb Brandon(300, 700, birbColor2);
	birb Martin(200, 600, birbColor3);
	birb Frijol(250,650, birbColor4);
	birb Jimmy(200, 700, birbColor5);

	Flower a(400, 500, flowerColor1);
	Flower b(500, 500, flowerColor2);
	Flower c(600, 500, flowerColor3);
	Flower d(700, 500, flowerColor4);
	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (1) {//GAME LOOP OMG
		

		window.clear();

		int ye = rand() % 101;
		if (ye <= 3)
			Alex.fly();

		int ye1 = rand() % 101;
		if (ye1 <= 3)
			Brandon.fly();

		int ye2 = rand() % 101;
		if (ye2 <= 3)
			Martin.fly();

		int ye3 = rand() % 101;
		if (ye3 <= 3)
			Frijol.fly();

		int ye4 = rand() % 101;
		if (ye4 <= 3)
			Jimmy.fly();

		Alex.draw(window);
		Brandon.draw(window);
		Martin.draw(window);
		Frijol.draw(window);
		Jimmy.draw(window);
		
		a.draw(window);
		b.draw(window);
		c.draw(window);
		d.draw(window);

		int we = rand() % 101;
		a.change(window);
		b.change(window);
		c.change(window);
		d.change(window);

		window.display();
	}
}

