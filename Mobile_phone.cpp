#include "Mobile_phone.h"
Mobile_phone::Mobile_phone(string name, int price, string colour, string processor, int ram, int rom, int battery)
{
	this->name = name;
	this->price = price;
	this->colour = colour;
	this->processor = processor;
	this->ram = ram;
	this->rom = rom;
	this->battery = battery;
}

void Mobile_phone::print()
{
	cout << "��������: " << name << endl;
	cout << "����: " << price << endl;
	cout << "����: " << colour << endl;
	cout << "���������: " << processor << endl;
	cout << "���: " << ram << " ��" << endl;
	cout << "���: " << rom << " ��" << endl;
	cout << "�������: " << battery << " ���" << endl;
}
