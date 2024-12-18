#include <iostream>
#include <string>
using namespace std;

void main()
{
	string bluds[99], materias[99];
	int i, j, numerodebluds, notas[99][20], total = 0, disciplinas, somagem[99], media;

	cout << "quantos bluds tens na turma\n";
	cin >> numerodebluds;
	cout << "quantas disciplinas tem\n";
	cin >> disciplinas;

	for (i = 0;i < numerodebluds;i++)
	{
		cout << "quero os nomes dos bluds sff\n";
		cin >> bluds[i];
	}
	for (i = 0;i < disciplinas;i++)
	{
		cout << "diz o nome das disciplinas\n";
		cin >> materias[i];
	}
	for (i = 0;i < numerodebluds;i++)
	{
		for (j = 0;j < disciplinas;j++)
		{
			cout << "quanto e que o " << bluds[i] << "teve a " << materias[j];
			cin >> notas[i][j];
		
		}
	}
	for (i = 0; i < numerodebluds; i++)
	{
		total = 0;
		for (j = 0; j < disciplinas; j++)
		{
			total = total + notas[i][j];
		}
		cout << "A media do " << bluds[i] << " e" << total / disciplinas << " \n";
	}
	for (i = 0; i < disciplinas; i++)
	{
		for (j = 0; j < numerodebluds; j++)
		{
			total = total + notas[j][i];
		}
		cout << "A media de " << materias[i] << " e" << total / numerodebluds << " \n";
	}
}
/*
fazer a media dos bluds a cada disciplina e de cada blud*/