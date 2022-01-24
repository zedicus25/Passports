#pragma once
#include <string>
#include <iostream>
class c_Pasport
{
private:
	std::string name;
	std::string lastName;
	std::string patronymic;
	int day;
	int mounth;
	int year;
	int inn;

	bool hasNumber(std::string str);
	void setDay(int day);
	void setYear(int year);
	void setMounth(int mounth);
	void setPatronymic(std::string patronymic);
	
public:
	c_Pasport(std::string name, std::string lastName, std::string patronymic, int day, int mounth, int year);

	void setName(std::string name);
	void setLastName(std::string lastName);
	void setInn(int inn);

	inline std::string getName() const {
		return this->name;
	}
	inline std::string getLastName() const{
		return this->lastName;
	}
	inline std::string getPatronymic() const {
		return this->patronymic;
	}
	inline int getDay() const {
		return this->day;
	}
	inline int getMounth() const {
		return this->mounth;
	}
	inline int getYear() const {
		return this->year;
	}
	inline int getInn() const {
		return this->inn;
	}

};

