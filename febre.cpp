#include <iostream>

using namespace std;

void main()

{

	int fi[2], ff[2], i;
    cin >> fi[0];
	cin >> fi[1];
	cin >> ff[0];
	cin >> ff[1];
	if (ff[0] <= 36)
	{
		cout << "a febre nao existe ";
	}
	else
	{
		if (fi[0] == ff[0])
		{
			if ((ff[0] >= 37) && (fi[1] == ff[1]))
			{
				cout << "\na febre se manteve";
			}
		}
		if (ff[0] == fi[0])
		{
			if (ff[1] > fi[1])
			{
				cout << "\na febre aumentou";
			}
			else if (ff[1] < fi[1])
			{
				cout << "\na febre diminuiu";
			}
		}
	}
}
