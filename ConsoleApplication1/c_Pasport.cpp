#include "c_Pasport.h"

bool c_Pasport::hasNumber(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i])) {
			return true;
		}
	}
	return false;
}

void c_Pasport::setDay(int day)
{
	try
	{
		if (day < 1 || day > 31) {
			this->day = 0;
			throw std::string("Incorrect day");
		}
		else {
			this->day = day;
		}
		
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}

void c_Pasport::setYear(int year)
{
	try
	{
		if (year < 1900 || year > 2022) {
			this->year = 0;
			throw std::string("Incorrect year");
		}
		else {
			this->year = year;
		}
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}

void c_Pasport::setMounth(int mounth)
{
	try
	{
		if (mounth < 1 || mounth > 12) {
			this->mounth = 0;
			throw std::string("Incorrect mount");
		}
		else {
			this->mounth = mounth;
		}
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}

void c_Pasport::setPatronymic(std::string patronymic)
{
	try
	{
		if (hasNumber(patronymic)) {
			throw std::string("Patronymic has numbers");
		}
		else {
			this->patronymic = patronymic;
		}
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}


c_Pasport::c_Pasport(std::string name, std::string lastName, std::string patronymic, int day, int mounth, int year)
{
	this->setName(name);
	this->setLastName(lastName);
	this->setPatronymic(patronymic);
	this->setDay(day);
	this->setMounth(mounth);
	this->setYear(year);
}

void c_Pasport::setName(std::string name)
{
	try
	{
		if (hasNumber(name)) {
			throw std::string("Name has numbers");
		}
		else {
			this->name = name;
		}
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}

void c_Pasport::setLastName(std::string lastName)
{
	try
	{
		if (hasNumber(lastName)) {
			throw std::string("Last name has numbers");
		}
		else {
			this->lastName = lastName;
		}
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}

void c_Pasport::setInn(int inn)
{
	try
	{
		if (inn <= 0) {
			throw std::string("INN cannot be negative");
		}
		else {
			this->inn = inn;
		}
	}
	catch (std::string str)
	{
		std::cout << "Error: " << str << "\n";
	}
}
