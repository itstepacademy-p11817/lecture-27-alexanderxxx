#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

enum firm_t { asd, qwe, bfg };
enum color_t { red, green, blue };

typedef struct st_m_t {
	int firm;
	int color;
	int hei;
	int len;
	int power;
	int speed;
	int temp;
}st;


int main()
{
	setlocale(0, "");
	//st stm{};

	st stm[10]; // = {"2","red",10,15,100,200,95,"bfg","green",15,20,150,250,120};
	//st firm = {};
	//std::cout << stm[1].firm;
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
		std::cin >> stm[i].firm;
		std::cout << "color: ";
		std::cin >> stm[i].color;
		std::cout << "hei: ";
		std::cin >> stm[i].hei;
		std::cout << "len: ";
		std::cin >> stm[i].len;
		std::cout << "power: ";
		std::cin >> stm[i].power;
		std::cout << "speed: ";
		std::cin >> stm[i].speed;
		std::cout << "temp: ";
		std::cin >> stm[i].temp;
		l++;
		std::cout << '\n';
	}
	std::cout << '\n';
	for (int i = 0;i < l;i++)
	{
		std::cout << stm[i].firm << '\n';
		std::cout << stm[i].color << '\n';
		std::cout << stm[i].hei << '\n';
		std::cout << stm[i].len << '\n';
		std::cout << stm[i].power << '\n';
		std::cout << stm[i].speed << '\n';
		std::cout << stm[i].temp << '\n';
		std::cout << '\n';
	}
	std::cout << '\n';
	system("pause");
	return 0;
}