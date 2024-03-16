#pragma once
class IHardware {
public:
	virtual void printInfo()const = 0;

	virtual void setName(const char*name) = 0;

	virtual double getPrice()const = 0;
};