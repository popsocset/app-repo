#pragma once
#pragma warning(disable: 4996)
#include <string>
#include "IHardware.h"
#include "Manufacturer.h" // подключаем заголовочный файл с типом перечислени€


class hardware: public IHardware {
private:
	static int counter; // счЄтчик сколько экземпл€ров класса создано
protected:
	char* name; //название
	Manufacturer type; //страна производства
	float price; //цена софта
	bool gaming; //€вл€етс€ ли софт бесплатным
public:

	hardware(const char* names, Manufacturer typse, float prices, bool gamings);
	hardware(const hardware& item);
	~hardware();

	void setPrice(float nprice); //сетер цена
	double getPrice() const; //гетер цена

	void setName(const char* NName); //сетер им€
	const char* getName() const; //гетер им€

	void setGaming(bool ifgaming); //сетер гейминг
	bool getGaming() const; //гетер гейминг

	void setType(Manufacturer typ); //сетер типа
	const char* gt() const; //гетер типа

	int returnCounter() const; //гетер счетчика

	virtual void printInfo() const;
	virtual const char* className() const;
};

