#pragma once
#include "Electronic_device.h"
#include <string>

using namespace std;

class Mobile_phone : public Electronic_device
{
	string processor, name, colour;
	int ram, rom, battery, price;
public:
	Mobile_phone(string, int, string, string, int, int, int);
	void print() override;
};

