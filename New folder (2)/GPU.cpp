#include "GPU.h"
#include <iostream>

void GPU::setMHZ(int rate){
	MHZrate = rate;
}
const char* GPU::className() const {
	return "GPU";
}
void GPU::printInfo() const {
	hardware::printInfo();
	std::cout << "Rate - " << MHZrate;
}

GPU::GPU(const char* name, Manufacturer type, float price, bool gaming, int rate):
hardware{name,type,price,gaming},
MHZrate(rate){}