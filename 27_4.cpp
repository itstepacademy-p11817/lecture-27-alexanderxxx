#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

enum v_t { �������, ������� };

typedef struct an_t {
	v_t cla;
	char n[100];
	char name[100];
}an;

void vivod( enum v_t rg)
{
	const char* s[2] = { "�������", "�������"};
	std::cout << s[rg] << '\n';
}

int main()
{
	setlocale(0, "");

	an ani[1000];
	int g = 0, l = 0, g2=0;
	for (int i = 0;i < 1000;i++)
	{
		std::cout << "1 - ���� ������ 0 - �����: ";
		std::cin >> g;
		if (g == 0)
		{
			break;
		}
		std::cout << "1 - create cat, 2 - create dog: ";
		std::cin >> g2;
		if (g2 == 1)
		{
			ani[i].cla = �������;
		}
		else if (g2 == 2)
		{
			ani[i].cla = �������;
		}
		std::cout << "��������: ";
		std::cin >> ani[i].n;
		std::cout << "������: ";
		std::cin >> ani[i].name;
		l++;
		std::cout << '\n';
	}
	std::cout << '\n';
	for (int i = 0;i < l;i++)
	{
		vivod(ani[i].cla);
		std::cout << ani[i].n << '\n';
		std::cout << ani[i].name << '\n';
	}
	std::cout << '\n';
	system("pause");
	return 0;
}