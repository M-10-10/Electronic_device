#pragma once
#include "Electronic_device.h"
#include <string>

using namespace std;

class Computer : public Electronic_device
{
	string chip, display, ports, name, colour;
	int ram, rom, price;
public:
	Computer(string, int, string, string, string, int, int, string);
	void print() override;
};

