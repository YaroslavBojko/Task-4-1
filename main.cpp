#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int firstNumber;
	cout << "������� ������ �����: ";
	cin >> firstNumber;

	int secondNumber;
	cout << "������� ������ �����: ";
	cin >> secondNumber;

	cout << "-----���������-----" << endl;

	int result;
	if (firstNumber < secondNumber)
	{
		result = firstNumber;
	}
	else {
		result = secondNumber;
	}


	cout << "���������� �����: " << result;
}