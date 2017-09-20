#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

enum firm_t { asd, qwe, bfg };
//enum model_t { ewq, ewe, ew3 };
enum color_t { red, green, blue };


typedef struct ut_t {
	int firm;
	int color;
	float screen;
	int mem;
	int proc;
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
		std::cout << "color: ";
		std::cin >> utg[i].color;
		std::cout << "screen: ";
		std::cin >> utg[i].screen;
		std::cout << "mem: ";
		std::cin >> utg[i].mem;
		std::cout << "proc: ";
		std::cin >> utg[i].proc;
		l++;
		std::cout << '\n';
	}
	std::cout << '\n';
	for (int i = 0;i < l;i++)
	{
		std::cout << utg[i].firm << '\n';
		std::cout << utg[i].color << '\n';
		std::cout << utg[i].screen << '\n';
		std::cout << utg[i].mem << '\n';
		std::cout << utg[i].proc << '\n';
	}
	std::cout << '\n';
	system("pause");
	return 0;
}