#pragma once
#pragma warning(disable: 4996)
#include <string>
#include "IHardware.h"
#include "Manufacturer.h" // ���������� ������������ ���� � ����� ������������


class hardware: public IHardware {
private:
	static int counter; // ������� ������� ����������� ������ �������
protected:
	char* name; //��������
	Manufacturer type; //������ ������������
	float price; //���� �����
	bool gaming; //�������� �� ���� ����������
public:

	hardware(const char* names, Manufacturer typse, float prices, bool gamings);
	hardware(const hardware& item);
	~hardware();

	void setPrice(float nprice); //����� ����
	double getPrice() const; //����� ����

	void setName(const char* NName); //����� ���
	const char* getName() const; //����� ���

	void setGaming(bool ifgaming); //����� �������
	bool getGaming() const; //����� �������

	void setType(Manufacturer typ); //����� ����
	const char* gt() const; //����� ����

	int returnCounter() const; //����� ��������

	virtual void printInfo() const;
	virtual const char* className() const;
};

