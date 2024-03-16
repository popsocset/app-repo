#pragma once
#include "hardware.h"
class GPU : public hardware {
protected:
	int MHZrate;
public:
	GPU(const char* name, Manufacturer type, float price, bool gaming, int rate);
	void setMHZ(int rate);
	virtual void printInfo() const override;
	virtual const char* className() const;
};
