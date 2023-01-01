#include "Kitty.h"
#include <iostream>

Kitty::Kitty(): _coat_color("Noname"), _year_of_appearance(1) {}

const std::string& Kitty::getCoat_color()const {
	return _coat_color;
}
void Kitty::setCoat_color(const std::string& coat_color) {
	_coat_color = coat_color;
}
int Kitty::getYear_of_appearance() const{
	return _year_of_appearance;
}
void Kitty::setYear_of_appearance(const int year_of_appearance) {
	_year_of_appearance = year_of_appearance;
}
void Kitty::jump() {
	std::cout << "Прыгнул Kitty !!" << std::endl;
}
void Kitty::sleep() {
	std::cout << "Спит Kitty" << std::endl;
}

Cat::Cat():_wool_len ("Noname"), _age(2) {}

const std::string& Cat::getWool_len() const {
	return _wool_len;
}
void Cat::setWool_len(const std::string& wool_len) {
	_wool_len = wool_len;
}
int Cat::getAge() const {
	return _age;
}
void Cat::setAge(const int age) {
	_age = age;
}
void Cat::jump() {
	std::cout << "Прыгнул Cat!!" << std::endl;
}
void Cat::sleep() {
	std::cout << "Спит Cat" << std::endl;
}

CatRick::CatRick(): _color("Noname"), _ageRick(3) {}

const std::string& CatRick::getColor() const {
	return _color;
}
void CatRick::setColor(const std::string& color) {
	_color = color;
}
int CatRick::getAgeRick()const {
	return _ageRick;
}
void CatRick::setAgeRick(const int ageRick) {
	_ageRick = ageRick;
}
void CatRick::jump() {
	std::cout << "Прыгнул CatRick!!" << std::endl;
}
void CatRick::sleep() {
	std::cout << "Спит CatRick" << std::endl;
}