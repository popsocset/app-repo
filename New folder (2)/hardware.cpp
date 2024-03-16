
#include <iostream>
#include <string>
#include "hardware.h" // ���������� ������������ ���� ������
using namespace std;

hardware::hardware(const char* name, Manufacturer type, float price, bool gaming) { //����������
	setName(name);
	setType(type);
	setPrice(price);
	setGaming(gaming);
	counter++;
}
hardware::hardware(const hardware& it)
	:hardware(it.name, it.type, it.price, it.gaming) {}

hardware::~hardware() { //����������
	counter--;
	delete[] name;
};

void hardware::setPrice(float nprice) { //������ ����
	price = nprice;
}
void hardware::setName(const char* NName) {
	delete[]name;
	name = new char[strlen(NName) + 1];
	strcpy(name, NName);
}
const char* hardware::getName() const { //������ ���
	return name;
}




void hardware::setGaming(bool ifgaming) { //������ �������
	gaming = ifgaming;
}
bool hardware::getGaming()const {  //������ �������
	return gaming;
}

void hardware::setType(Manufacturer typ) {  //������ ����
	type = typ;
}
const char* hardware::gt() const {  //������ ����
	switch (type) {
	case Manufacturer::CPU: return "CPU"; break;
	case Manufacturer::GPU: return "CPU"; break;
	case Manufacturer::Motherboard: return "CPU"; break;
	}
}

int hardware::returnCounter() const {  //������ �������
	return counter;
}

double hardware::getPrice() const {  //������ ����
	return price;
}

void hardware::printInfo() const {
	cout << className() << endl;
	cout << "Name - " << getName() << endl;
	cout << "Type - " << gt() << endl;
	cout << "Price - " << getPrice() << endl;
	cout << "Is it gaming (0-no, 1-yes) - " << getGaming() << endl;
	cout << "Amount created:" << counter << endl;
}
const char* hardware::className() const {
	return "hardware";
}


int hardware::counter = 0;