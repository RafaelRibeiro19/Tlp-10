#include <iostream>
#include <string>
using namespace std;

void main()
{
	int Portugues = 0, tamanho = 0, i, traducao;
	string morses[26]={".−", "−...", "−.−.", "−..", ".", "..−.", "−−.", "....", "..", ".−−−", "−.−", ".−..", "−−", "−.", "−−−", ".−−.", "−−.−", ".−.", "...", "−", "..−", "...−", ".−−", "−..−", "−.−−", "−−.."},
		portugals[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" },
		morse[999], frase[9999];
	cout << "blud dizme o tamanho da frase";
	cin >> tamanho;
	cout <<"queres traduzir pa portunhes ou pa codigo morse(1/qualqueroutro)";
	cin >> traducao;
	if (traducao == 1)
	{
		cout << "frase a traduzir";
		for (i = 0;i < tamanho;i++)
		{
			cin >> frase[i];
		}
		for (int i = 0; i < tamanho; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (frase[i] == portugals[j])
				{
					cout << morses[j];
				}
			}

		}
	}
	else
	{
		cout << "Qual a frase ";
		cout << "frase a traduzir";
		for (i = 0;i < tamanho;i++)
		{
			cin >> morse[i];
		}
		for (int i = 0; i < tamanho; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (morse[i] == morses[j])
				{
					cout << portugals[j];
				}
			}

		}
	}


}