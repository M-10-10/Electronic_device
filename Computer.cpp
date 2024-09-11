#include "Computer.h"
Computer::Computer(string name, int price, string colour, string chip, string display, int ram, int rom, string ports )
{
	this->name = name;
	this->price = price;
	this->colour = colour;
	this->chip = chip;
	this->display = display;
	this->ports = ports;
	this->ram = ram;
	this->rom = rom;
}

void Computer::print()
{
	cout << "��������: " << name << endl;
	cout << "����: " << price << endl;
	cout << "����: " << colour << endl;
	cout << "���: " << chip << endl;
	cout << "�������: " << display << endl;
	cout << "���: " << ram << " ��" << endl;
	cout << "���: " << rom << " ��" << endl;
	cout << "�����: " << ports << endl;
}
