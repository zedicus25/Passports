#include <iostream>
#include "c_Pasport.h"
int main()
{
	c_Pasport* pasport = new c_Pasport("Ivan", "Ivanov", "Ivanich", 1, 12, 1996);
	pasport->setInn(5154151);
	std::cout << pasport->show();
	delete pasport;
}