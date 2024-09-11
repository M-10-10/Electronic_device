#include "Electronic_device.h"
#include "Computer.h"
#include "Mobile_phone.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 
	Electronic_device* ed;
	ifstream fin;
	int a;
	char c;
	do
	{
		system("cls");
		do
		{
			cout << "Смартфон - 1, Ноутбук - 2" << endl;
			cin >> a;
		} while (a != 1 && a != 2);
		switch (a)
		{
		case(1):
		{
			fin.open("iPhone.txt");
			if (!fin.is_open())
			{
				cout << "Файл не открылся";
			}
			else
			{
				string processor, name, colour;
				int ram, rom, battery, price;
				while (!fin.eof())
				{
					fin >> name;
					fin >> price;
					fin.ignore();
					fin >> colour;
					fin >> processor;
					fin >> ram;
					fin >> rom;
					fin >> battery;
				}
				fin.close();
				Mobile_phone* mp = new Mobile_phone(name, price, colour, processor, ram, rom, battery);
				ed = mp;
				ed->print();
				break;
			}
		}
		case(2):
		{
			fin.open("macBook.txt");
			if (!fin.is_open())
			{
				cout << "Файл не открылся";
			}
			else
			{
				string chip, display, ports, name, colour;
				int ram, rom, price;
				while (!fin.eof())
				{
					fin >> name;
					fin >> price;
					fin >> colour;
					fin >> chip;
					fin >> display;
					fin >> ram;
					fin >> rom;
					fin.ignore();
					fin >> ports;
				}
				fin.close();
				Computer* cp = new Computer(name, price, colour, chip, display, ram, rom, ports);
				ed = cp;
				ed->print();
				fin.close();
				break;
			}
		}
		}
		cout << "Хотите еще раз запустить программу? (y-да)";
		cin >> c;
	} while (c == 'y');
}