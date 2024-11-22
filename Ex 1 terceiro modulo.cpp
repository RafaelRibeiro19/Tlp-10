#include <iostream>
using namespace std;

void main()
{
	int idade[30], altura[30], i, j, media, soma = 0, contar = 0;
	for (i = 0; i <30; i++)
	{
		cout << "diz a idade do " << i + 1 << " blud\n";
		cin >> idade[i];
	}
	for (i = 0; i < 30; i++)
	{
		cout << "diz a altura do" << i + 1 << " blud\n";
		cin >> altura[i];
		soma += altura[i];
	}
	media = soma / idade[i];
	cout << media;
	for (i = 0; i < 30; i++)
	{
		if (idade[i] >= 13)
		{
			if (altura[i] < media)
			{
				contar++;
			}
		}
	}
	cout << "Cerca de " << contar << " tem mais de 13 anos e tem a altura abaixo da media\n";
}
