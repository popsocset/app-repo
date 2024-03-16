#pragma once
#include "GPU.h"
class Card : public GPU {
private:
	int fans;
public:
	Card(const char* name, Manufacturer type, float price, bool gaming, int rate, int fans);
	void setFans(int num);
	virtual void printInfo() const override;
	virtual const char* className() const;
};
