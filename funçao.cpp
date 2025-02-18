#include <iostream>
#include <locale.h>
using namespace std;

int mediadosniggas(int varios)
{
	varios = varios / 10;
	return varios;
}
int menornumero(int numeros[10])
{
	int omenor= numeros[0],i;
	for (i = 0;i < 10;i++)
	{
		
			if (omenor > numeros[i])
			{
				omenor = numeros[i];
			}
	}
	return omenor;

}
int maiornumero(int numeros[10])
{
	int omaior= numeros[0],i;
	for (i = 0;i < 10;i++)
	{

		if (omaior < numeros[i])
		{
			omaior = numeros[i];
		}
	}
	return omaior;
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], ulisses, i, j, media, total = 0, menor, maior;
		cout << "diz-me oque queres fazer: \n" << "calcular a media dos numeros(1); \n" << "encontrar o menor(2); \n" << "encontrar o maior(3); \n" << "sair(0)\n";
		cin >> ulisses;
		
		switch (ulisses)
		{
		case 1:
		{
			for (i = 0;i < 10;i++)
			{
				cout << "dá-me o " << i << " número";
				cin >> numeros[i];

				total = numeros[i] + total;
			}
			media = mediadosniggas(total);
			cout << media;
			break;
		}
		case 2:
		{
			for (i = 0;i < 10;i++)
			{
				cout << "dá-me o " << i + 1 << " número";
				cin >> numeros[i];
			}
			menor = menornumero(numeros);
			cout << menor;
			break;
		}
		case 3:
		{
			for (i = 0;i < 10;i++)
			{
				cout << "dá-me o " << i << " número";
				cin >> numeros[i];
			}
			maior = maiornumero(numeros);
			cout << maior;
			break;

		}
		case 0:
		{
			break;
		}
		}
		

	
}