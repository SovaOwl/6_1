#include <iostream>
#include"Choice.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	int a = -999, b = -999, choice = -99;

	do
	{
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - выход): ";
	cin >> choice;

	Choice(choice, a, b);

	} while (choice != 6);
}