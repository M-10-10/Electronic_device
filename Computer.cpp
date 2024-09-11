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
	cout << "Íàçâàíèå: " << name << endl;
	cout << "Öåíà: " << price << endl;
	cout << "Öâåò: " << colour << endl;
	cout << "×èï: " << chip << endl;
	cout << "Äèñïëåé: " << display << endl;
	cout << "ÎÇÓ: " << ram << " ãá" << endl;
	cout << "ÏÇÓ: " << rom << " ãá" << endl;
	cout << "Ïîðòû: " << ports << endl;
}
