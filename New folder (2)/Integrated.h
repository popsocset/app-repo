#pragma once
#include "GPU.h"
class Integrated :public GPU {
private:
	char* origin;
public:
	Integrated(const char* name, Manufacturer type, float price, bool gaming, int rate, const char* origin);
	void setOrigin(const char* CPU);
	virtual void printInfo() const override;
	virtual const char* className() const;
};