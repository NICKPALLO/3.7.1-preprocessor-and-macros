#include <iostream>
#include <Windows.h>


#define MODE 0
#ifndef MODE 
#error Important macro required
#endif

#if MODE == 1
int add(int num1, int num2)
{
	return num1 + num2;
}
#endif

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#if MODE == 0
	std::cout << "Работаю в тренировочном режиме";
#endif

#if MODE == 1
	int num1, num2;
	std::cout << "Введите число 1: ";
	std::cin >> num1;
	std::cout << "Введите число 1: ";
	std::cin >> num2;
	std::cout << "Результат сложения: ";
	std::cout << add(num1, num2);
#endif

#if MODE!=1 && MODE!=0
	std::cout << "Неизвестный режим. Завершение работы";
#endif
}