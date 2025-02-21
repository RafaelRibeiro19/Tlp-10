#include <iostream>
#include <locale.h>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string jogadores[1000];
int pontosjogador[1000];
int vezesjogadas = -1;
int pontos = 0;
string papel[15] = { "Caderno", "CaixaPapel", "Envelope", "Guardanapo", "Jornal", "PapelA4", "CartãoPostal", "Livro", "Revista", "Etiqueta", "Papelão", "Recibo", "Cartaz", "FolhaSulfite", "SacolaPapel" };
string vidro[15] = { "GarrafaVidro", "CopoVidro", "Jarra", "PratoVidro", "VidroTemperado", "JanelaVidro", "Lâmpada", "Espelho", "FrascoVidro", "TuboEnsaio", "Aquário", "AbajurVidro", "VasoVidro", "TampaVidro", "Ampola" };
string plastico[15] = { "GarrafaPET", "Copo plastico", "Sacola plastica", "Palhinha", "Pote plastico", "Tampa de garrafa", "Embalagem de plastico", "Taparuere", "Prato de festas de ano", "Talheres de festas de ano", "Saco do Pingo Doce", "Frasco", "SacoBolha", "Mangueira", "CaboUSB" };
string produtos[45] = { "GarrafaPET", "Copo plastico", "Sacola plastica", "Palhinha", "Pote plastico", "Tampa de garrafa", "Embalagem de plastico", "Taparuere", "Prato de festas de ano", "Talheres de festas de ano", "Saco do Pingo Doce", "Frasco", "SacoBolha", "Mangueira", "CaboUSB", "Caderno", "CaixaPapel", "Envelope", "Guardanapo", "Jornal", "PapelA4", "CartãoPostal", "Livro", "Revista", "Etiqueta", "Papelão", "Recibo", "Cartaz", "FolhaSulfite", "SacolaPapel", "GarrafaVidro", "CopoVidro", "Jarra", "PratoVidro", "VidroTemperado", "JanelaVidro", "Lâmpada", "Espelho", "FrascoVidro", "TuboEnsaio", "Aquário", "AbajurVidro", "VasoVidro", "TampaVidro", "Ampola" };
int jogo()
{
	pontos = 0;
	vezesjogadas = vezesjogadas + 1;
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int i, j, k;
	string resposta;
	for (k = 0; k < 10; k++)
	{
		int produtoescolhido = rand() % 45;
		cout << "Onde vai o produto " << produtos[produtoescolhido] << "?";
		cin >> resposta;
		for (j = 15; j < 30; j++)
		{
			if (resposta == "papel" && produtos[produtoescolhido] == produtos[j])
			{
				cout << "Acertaste\n";
				pontos = pontos + 5;
				break;
			}
		}
		for (j = 30; j < 45; j++)
		{
			if (resposta == "vidro" && produtos[produtoescolhido] == produtos[j])
			{
				cout << "Acertaste\n";
				pontos = pontos + 5;
				break;
			}
		}
		for (j = 0; j < 15; j++)
		{
			if (resposta == "plastico" && produtos[produtoescolhido] == produtos[j])
			{
				cout << "Acertaste\n";
				pontos = pontos + 5;
				break;
			}
		}
	}
	cout << "Qual o teu utilizador: ";
	cin >> jogadores[vezesjogadas];
	pontosjogador[vezesjogadas] = pontosjogador[vezesjogadas] + pontos;
	cout << "Os pontos foram: " << pontos;
	return 0;
}
int ranking()
{
	int i, top2 = 0, top3 = 0, top1 = 0;
	for (i = 0; i < vezesjogadas + 1; i++)
	{
		if (pontosjogador[i] > top1)
		{
			top1 = pontosjogador[i];
		}
	}
	for (i = 0; i < vezesjogadas + 1; i++)
	{
		if (pontosjogador[i] == top1)
		{
			cout << "O jogador em 1 foi o jogador: " << jogadores[i] << "\n";
		}
	}
	for (i = 0; i < vezesjogadas + 1; i++)
	{
		if (pontosjogador[i] > top2 && pontosjogador[i] < top1)
		{
			top2 = pontosjogador[i];
		}
	}
	for (i = 0; i < vezesjogadas + 1; i++)
	{
		if (pontosjogador[i] == top2)
		{
			cout << "O jogador em 2 foi o jogador: " << jogadores[i] << "\n";
		}
	}
	for (i = 0; i < vezesjogadas + 1; i++)
	{
		if (pontosjogador[i] > top3 && pontosjogador[i] < top2)
		{
			top3 = pontosjogador[i];
		}
	}
	for (i = 0; i < vezesjogadas + 1; i++)
	{
		if (pontosjogador[i] == top3)
		{
			cout << "O jogador em 3 foi o jogador: " << jogadores[i] << "\n";
		}
	}
	return 0;
}
int menu()
{
	int escolha;
	do {
		cout << "\nO que queres fazer?\n" << "1-Jogar\n" << "2-Consultar Rankings\n" << "0-Sair\n" << "Escolha: ";
		cin >> escolha;
		switch (escolha)
		{
		case 1:
			jogo();
			break;
		case 2:
			ranking();
			break;
		}
	} while (escolha != 0);
	return escolha;
}
int main()
{
	menu();
}