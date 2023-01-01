#include <iostream>
#include <string>
#include "Kitty.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Kitty a;
	Cat b;
	CatRick c;
	std::cout << "цвет шерсти семейства котов будет " << a.getCoat_color() << std::endl;
	std::cout << "Cat использует метод Kitty - jump \n";
	b.Kitty::jump();
	std::cout << "Cat использует метод Kitty - sleep \n";
	b.Kitty::sleep();
	std::cout << "CatRick использует метод Cat - jump \n";
	c.Cat::jump();
	std::cout << "CatRick использует метод Cat - sleep \n";
	c.Cat::sleep();
	std::cout << "CatRick использует свой метод sleep \n";
	c.sleep();
	std::cout << "Kitty использует свой метод jump \n";
	a.jump();
	

	
}