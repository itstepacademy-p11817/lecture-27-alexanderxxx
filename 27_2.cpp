#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

enum firm_t { asd, qwe, bfg };
enum model_t { ewq, ewe, ew3 };
enum color_t { red, green, blue };


typedef struct ut_t {
	int firm;
	int model;
	int color;
	int min_temp;
	int max_temp;
	bool steam;
	int power;
}ut;


int main()
{
	setlocale(0, "");

	ut utg[10]; 
	int g = 0, l = 0;
	for (int i = 0;i < 10;i++)
	{
		std::cout << "1 - ¬вод данных 0 - выход: ";
		std::cin >> g;
		if (g == 0)
		{
			break;
		}
		std::cout << "firm: ";
		std::cin >> utg[i].firm;
		std::cout << "model: ";
		std::cin >> utg[i].model;
		std::cout << "color: ";
		std::cin >> utg[i].color;
		std::cout << "min_temp: ";
		std::cin >> utg[i].min_temp;
		std::cout << "max_temp: ";
		std::cin >> utg[i].max_temp;
		std::cout << "steam: ";
		std::cin >> utg[i].steam;
		std::cout << "power: ";
		std::cin >> utg[i].power;
		l++;
		std::cout << '\n';
	}
	std::cout << '\n';
	for (int i = 0;i < l;i++)
	{
		std::cout << utg[i].firm << '\n';
		std::cout << utg[i].model << '\n';
		std::cout << utg[i].color << '\n';
		std::cout << utg[i].min_temp << '\n';
		std::cout << utg[i].max_temp << '\n';
		std::cout << utg[i].steam << '\n';
		std::cout << utg[i].power << '\n';
	}
	std::cout << '\n';
	system("pause");
	return 0;
}