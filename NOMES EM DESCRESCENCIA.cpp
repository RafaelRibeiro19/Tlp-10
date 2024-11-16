#include <iostream>
#include <string>
using namespace std;


void main()
{
    char h;
    string variosnomes[5];
    int i;

    do
    {
        for (i = 0; i < 5; i++)
        {
            cout << "da ai cinco nomes\n";
            cin >> variosnomes[i];
        }
        for (i = 4; i > -1; i--)
        {
            cout << variosnomes[i] << "\n";
        }
        cout << "queres sair?";
        cin >> h;
    } while (h == 'n');
}