#pragma once
#include "stdafx.h"
#include <iostream>
#include "hardware.h" // подключаем заголовочный файл класса
#include <queue>
#include <map>
#include "Card.h"
#include "Integrated.h"

using namespace std;

class hardwareh {
private:
	map<hardware*, int> list;
	int price;
public:
	void put(hardware* item) {
		list[item] += 1;
		price += item->getPrice();
	}
	void put(queue<hardware*>* q) {
		price = 0;
		hardware item = *q->front();
		while (!(q->empty())) {
			put(q->front());
			q->pop();
		}
 	}
	void printMap() {
		map<hardware*, int>::iterator i;
		for (i = list.begin(); i != list.end(); i++) {
			cout << i->first->getName() << " : " << i->second << endl;
		}
	}
	void printPrice() {
		cout << price;
	}
};

int main()
{
	//hardware::hardware(char *names, Manufacturer typse, float prices, bool gamings);
	//queue<hardware*> queue1;



	//hardware Rtx3060("Graphics processor", Manufacturer::GPU, 4500, false);
	//Rtx3060.printInfo();
	//cout << endl;
	//hardware R53600("Processor", Manufacturer::CPU, 45000, true);
	//R53600.printInfo();
	//cout << endl;
	//hardware R53600X(R53600);
	//R53600X.printInfo();
	//cout << endl;


	//queue1.push(&R53600);
	//queue1.push(&Rtx3060);
	//queue1.push(&R53600X);
	//cout << std::endl;
	//cout << std::endl;
	//cout << std::endl;
	//hardwareh items;
	//items.printPrice();
	//items.put(&queue1);
	//items.put(&Rtx3060);
	//cout << std::endl;
	//items.printPrice();
	//cout << std::endl;
	//items.printMap();

	//
	hardware item("ite", Manufacturer::GPU, 1248, true);
	
	item.printInfo();

	cout << endl;
	Card GT1030("GT1030", Manufacturer::CPU, 4000, false, 4000, 3);

	GT1030.printInfo();

	return 0;
}

