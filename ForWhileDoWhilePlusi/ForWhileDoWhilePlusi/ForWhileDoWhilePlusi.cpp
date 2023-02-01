#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	long int num1 = 0, result = 1; bool Flag = true; string test;

	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");


	while (Flag == true)
	{
		cout << "Введите число: "; cin >> test;

		if (test == "End")
		{
			Flag = false;
			break;
		}
		num1 = stoi(test);
		if (num1 < 0) 
		{
			cout << "Число " << num1 << " является отрицательным\n";
			break;
		}

		else {
			for (int i = 2; i <= sqrt(num1); i++) {
				
				if (num1 % i == 0) {
					cout << "Чисто " << num1 << " является простым числом\n";
					break;
				}
				else {
					cout << "Чисто " << num1 << " не является простым числом\n";
				}
			}
		}

		for (int i = 1; i <= num1; i++)
			result = result * i;

		cout << "Факториал " << num1 << " Равен: " << result << "\nДля выхода введите End" << "\n" << "_________________________\n";
		result = 1;
	

	}


}
