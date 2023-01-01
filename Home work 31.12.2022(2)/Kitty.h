#pragma once
#include <string>


class Kitty
{
public:
	Kitty();
	const std::string& getCoat_color()const;
	void setCoat_color(const std::string& coat_color);
	int getYear_of_appearance() const;
	void setYear_of_appearance(const int year_of_appearance);
	void jump();
	void sleep();
private:
	std::string _coat_color;
	int _year_of_appearance = 200;
};

class Cat:public Kitty
{
public:
	Cat();

	const std::string& getWool_len() const;
	void setWool_len(const std::string& wool_len);
	int getAge() const;
	void setAge(const int age);
	void jump();
	void sleep();
private:
	std::string _wool_len;
	int _age = 15;
};

class CatRick:public Cat
{
public:
	CatRick();

	const std::string& getColor() const;
	void setColor(const std::string& color);
	int getAgeRick()const;
	void setAgeRick(const int ageRick);
	void jump();
	void sleep();
private:
	std::string _color;
	int _ageRick = 8;
};