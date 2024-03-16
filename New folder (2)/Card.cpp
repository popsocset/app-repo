#include "Card.h"
#include "GPU.h"
#include <iostream>
void Card::setFans(int num) {
	fans = num;
}
const char* Card::className() const {
	return "Card";
}
void Card::printInfo() const {
	GPU::printInfo();
	std::cout << std::endl << "Fans - " << fans;
}

Card::Card(const char* name, Manufacturer type, float price, bool gaming, int rate, int fanum):
	GPU(name,  type,  price,  gaming,  rate), fans(fanum) { }
