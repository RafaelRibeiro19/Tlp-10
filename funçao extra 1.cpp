#include <iostream>
using namespace std;

int somar(int numero1, int numero2)
{
	numero1 = numero1 + numero2;
	return numero1;
}

int multiplicar(int numero1, int numero2)
{
	numero1 = numero1 * numero2;
	return numero1;
}
int subtrair(int numero1, int numero2)
{
	numero1 = numero1 - numero2;
	return numero1;
}
int dividir(int numero1, int numero2)
{
	numero1 = numero1 / numero2;
	return numero1;
}

void main()
{	
	int numero1,numero2, i, ulisses, soma, multiplicašao, subtrašao, divisao;
cout << "un numero plis";
	cin >> numero1;
	cout << "outro numero plis";
	cin >> numero2;

	
	cout << "escolhe\n sair=0 \n +=1 \n *=2 \n -=3 \n /=4: \n";
	cin >> ulisses;
	switch (ulisses)
	{
	case 1:
		soma = somar(numero1, numero2);
		cout << soma <<"\n";
		break;
	case 2:
		multiplicašao = multiplicar(numero1, numero2);
		cout << multiplicašao<<"\n";
		break;
	case 3:
		subtrašao = subtrair(numero1, numero2);
		cout << subtrašao<<"\n";
		break;
	case 4:
		divisao = dividir(numero1, numero2);
		cout << divisao<<"\n";
		break;
	case 0:
		break;
	}
	
}