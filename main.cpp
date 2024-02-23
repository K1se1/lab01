
#include "binhex.h"
#include<iostream>
//факториал 
int factorial(int n)  {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Первая программа(основная)
    int n = 5;
    int result = factorial(n); // Вызов функции factorial для вычисления факториала числа n
    std::cout << "Факториал числа " << n << " равен " << result << std::endl; // Вывод результата
    // Вторая программа(которая статическая библиотека)
    
    setlocale(LC_ALL, "Russian");
	float b ;
	int a, base;
	std::cout << "Введите целочисленное число: ";
	std::cin >> a;
	std::cout << "Введите, в какой системе счисления вы хотите вывести его побайтово: ";
	std::cin >> base;
	byte((unsigned long int*)(&a), sizeof(a), base); // для того чтобы двигаться по нашему числу по одному байту, преобразовываем число к uint8_t
	std::cout << "Введите число с плавующей точкой: ";
	std::cin >> b;
	std::cout << "Введите, в какой системе счисления вы хотите вывести его побайтово: ";
	std::cin >> base;
	byte((unsigned long int*)(&b), sizeof(b), base);
    
}
