#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	fstream f("D:\\2 КУРС\\Чемель\\Файл\\file_example_1.txt");
		int n = 0;
	for (; !f.eof(); )
	{
		char s;
		f >> s;
		n++;
	}
	cout << "Кол-во символов = " << n << endl;
}