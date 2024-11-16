#include <iostream>
using namespace std;


void main()
{
	int num[10], i, somar=0, contar=0;
	char j;
	for (i = 0; i < 10; i++)
	{
		cout << "da ai 10 numeros pls\n";
		cin >> num[i];
	}
	cout << "queres somar os niggativos ou so contar?\n";
	cin >> j;
	switch (j)
	{
	case 's':
		for (i = 0; i < 10; i++)
		{
			if (num[i] < 0)
			{
				somar = somar + num[i];
			}
		}
		cout << "a soma e:"<<somar;
		break;
	
	case 'c':
		for (i = 0; i < 10; i++)
		{
			if (num[i] < 0)
			{
				contar = contar + 1;
			}
		}
		cout << "e este o numero total de numeros negativos:" << contar;
		break;
	}
}