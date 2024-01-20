//1//
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	fstream f("D:\\2 КУРС\\Чемель\\Файл\\file1.txt");
	int j;
	string surname;
	int age;
	for (j = 0; j <= 2; j++)
	{
		cout << "Введите фамилию: ";
		cin >> surname;
		cout << "Введите возраст: ";
		cin >> age;
		f << surname << '\t'<< age << '\n';
	}
}