#include <iostream>
#include "c_Pasport.h"
int main()
{
	c_Pasport* pasport = new c_Pasport("Ivan", "Ivanov", "Ivanich", 1, 12, 1996);
	std::cout << pasport->getName() << "\n";
	std::cout << pasport->getLastName() << "\n";
	std::cout << pasport->getDay() << "\n";
	std::cout << pasport->getMounth() << "\n";
	std::cout << pasport->getYear() << "\n";
}