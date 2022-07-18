#include <iostream>
#include "math.h"
#pragma once

using namespace std;

int Choice(int ch, int a, int b)
{
	if (ch == 1)
	{
		cout << a << " + " << b << " = " << addition(a, b) << endl;
	}
	else if (ch == 2)
	{
		cout << a << " - " << b << " = " << subtraction(a, b) << endl;
	}
	else if (ch == 3)
	{
		cout << a << " * " << b << " = " << multiplication(a, b) << endl;
	}
	else if (ch == 4)
	{
		cout << a << " / " << b << " = " << division(a, b) << endl;
	}
	else if (ch == 5)
	{
		cout << a << " в степени " << b << " = " << exponentiation(a, b) << endl;
	}
	else if (ch == 6)
	{
		cout << "До свидания!" << endl;
	}
	else
	{
		cout << "Неверная команда, попробуйте снова" << endl;
	}
	return 0;
}