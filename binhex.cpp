#include "binhex.h"

// функция, для преобразования в нужную систему счисления
std::string binhex(int a, const int base)
{

	const char l[16] = { '0', '1', '2', '3','4','5','6','7','8','9','A','B','C', 'D','E','F' };
	std::string res = "00000000";
	for(int i = 7; i >=0; --i)
	{
		res[i] = l[a % base];
		a /= base;
	}
	return res;
}

// Здесь с помощью арифметики указателей считываем переменную побайтово
void byte(unsigned long int* a, int len, int base)
{

	for (int i = len - 1; i >= 0; --i)
	{
		std::cout << binhex((int)a[i], base) << "|";
	}
	std::cout << "\n";
}
