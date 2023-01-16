#include <iostream> //ololol
#include <string>
#include "TemplateArray.h"
#include "TemplateArray.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	TemplateArray <int> a(10);

	for (int i = 0; i < a.getSize(); i++)
	{
		a.setData(i, rand()%100);
	}

	cout << "�������� ������ a:" << endl;
	for (auto i = 0; i < a.getSize(); i++)
		cout << "a[ " << i << " ] = " << a.get(i) << endl;

	TemplateArray<int> b(a);
	cout << "������ b:" << endl;
	for (auto i = 0; i < b.getSize(); i++)
		cout << "b[ " << i << " ] = " << b.get(i) << endl;


	TemplateArray<int> c(200);
	c = b;
	cout << "������ c:" << endl;
	for (auto i = 0; i < c.getSize(); i++)
		cout << "c[ " << i << " ] = " << c.get(i) << endl;


	return 0;
}

