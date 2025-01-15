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


	if (firstNumber < secondNumber)
	{
		cout << "Наименьшее число: " << firstNumber;
	}
	else if (firstNumber == secondNumber)
	{
		cout << "Числа равны!";
	}
	else 
	{
		cout << "Наименьшее число: " << secondNumber;
	}


	
}