#include <iostream>
using namespace std;

void main()
{
	int vetor1[10][2],vetor2[20], i, posicion = 0, maior = 25, posicao = 1;
	for (i = 0; i < 10; i++)
	{
		cout << "dame um numero\n";
		cin >> vetor1[i][0];

		cout << "dame um numero\n";
		cin >> vetor1[i][1];
	}
	for (i = 0; i < 20; i++)
	{
		vetor2[i] = vetor1[posicion][0];
		i = i + 1;
		vetor2[i] = vetor1[posicion][1];
		posicion = posicion + 1;
	}
	for (i = 0; i < 20; i++)
	{
		cout << vetor2[i] << " ";
	}
	for (i = 0; i < 20; i++)
	{
		if (vetor2[i] > maior)
		{
			maior = vetor2[i];
			posicao = i;
		}
	}
	cout << "o maior numero e " << maior << "\na posiçao dele e " << posicao;
}