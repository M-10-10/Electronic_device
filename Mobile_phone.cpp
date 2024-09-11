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
	cout << "Íàçâàíèå: " << name << endl;
	cout << "Öåíà: " << price << endl;
	cout << "Öâåò: " << colour << endl;
	cout << "Ïðîöåññîð: " << processor << endl;
	cout << "ÎÇÓ: " << ram << " ãá" << endl;
	cout << "ÏÇÓ: " << rom << " ãá" << endl;
	cout << "Áàòàðåÿ: " << battery << " ìÀ÷" << endl;
}
