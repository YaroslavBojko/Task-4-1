#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int firstNumber;
	cout << "Введите первое число: ";
	cin >> firstNumber;

	int secondNumber;
	cout << "Введите второе число: ";
	cin >> secondNumber;

	cout << "-----Проверяем-----" << endl;

	int result;
	if (firstNumber < secondNumber)
	{
		result = firstNumber;
	}
	else {
		result = secondNumber;
	}


	cout << "Наименьшее число: " << result;
}