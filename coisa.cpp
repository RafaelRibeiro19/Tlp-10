#include <iostream>
using namespace std;

void main()
{
	int i, N1=0;

	do {
		cout << "diz um numero de 0 a 100: ";
		cin >> N1;
	} while (N1 < 0 || N1>100);

	for (i = N1; i >=0; i--)
	{
		if (i % 2 != 0)
		{
			cout << i << "/n";
		}
	}
	
}