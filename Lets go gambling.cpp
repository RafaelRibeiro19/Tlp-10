#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int dados[5], bigwin[5], i, j, verificamento=0;
	for (i = 0; i < 5; i++)
	{
		bigwin[i] = rand() % 50 + 1;
	}
	for (i = 0; i < 5; i++)
	{
		cout << bigwin[i]<<"\n";
	}
	for (i = 0; i < 5; i++)
	{

		cout << "qual numero e?\n";
		cin >> dados[i];
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (dados[i] == bigwin[j])
			{
				verificamento = verificamento + 1;
		    }
		}

	}
	if (verificamento == 5)
	{
		cout << "tás rico rei";
	}
	if (verificamento == 0)
	{
		cout << "pobre";
	}
	for (i = 1; i < 5; i++)
	{
		if (verificamento == i)
		{
			cout << "só acertaste esta quantidade de numeros:\n" << i;
		}
	}
}