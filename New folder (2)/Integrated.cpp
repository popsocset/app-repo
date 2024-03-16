#include "Integrated.h"
#include "GPU.h"
#include <iostream>
void Integrated::setOrigin(const char*name){
	delete[]origin;
	origin = new char[strlen(name) + 1];
	strcpy(origin, name);
}
const char* Integrated::className() const {
	return "Integrated";
}
void Integrated::printInfo() const {
	GPU::printInfo();
	std::cout << std::endl<<"Chip manuf. company - " << origin;
}
Integrated::Integrated(const char* name, Manufacturer type, float price, bool gaming, int rate, const char* orn):
	GPU{name, type,  price,  gaming,  rate }
	{ setOrigin(orn); }
