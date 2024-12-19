#include <iostream>
#include <locale.h>
#include <time.h>
#include <string>
using namespace std;

void main()
{
	srand(time(0));
	string bludclawgs[5] = { "niggel","quiggel","miguel","riggel","xiggel" },
		sitios[5] = { "casadoniggel","complexoaquatico","casadolixo","lardeidosos","gelataria" };
	cout << bludclawgs[rand() % 5]<<"\n";
	cout << sitios[rand() % 5]<<"\n";
}