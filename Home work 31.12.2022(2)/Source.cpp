#include <iostream>
#include <string>
#include "Kitty.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Kitty a;
	Cat b;
	CatRick c;
	std::cout << "���� ������ ��������� ����� ����� " << a.getCoat_color() << std::endl;
	std::cout << "Cat ���������� ����� Kitty - jump \n";
	b.Kitty::jump();
	std::cout << "Cat ���������� ����� Kitty - sleep \n";
	b.Kitty::sleep();
	std::cout << "CatRick ���������� ����� Cat - jump \n";
	c.Cat::jump();
	std::cout << "CatRick ���������� ����� Cat - sleep \n";
	c.Cat::sleep();
	std::cout << "CatRick ���������� ���� ����� sleep \n";
	c.sleep();
	std::cout << "Kitty ���������� ���� ����� jump \n";
	a.jump();
	

	
}