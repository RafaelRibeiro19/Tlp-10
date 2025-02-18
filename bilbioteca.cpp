#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    string coisinha;
    int  code[13], i, numeroscoisados[12], somacoisa = 0, calculo;
    cout << "dá me o código, jp --> ";
    cin >> coisinha;
    for (i = 0; i < 13; i++)
    {
        code[i] = coisinha[i] - '0';
    }
    for (i = 0; i < 12; i++)
    {

        if (i % 2 == 0)
        {
            numeroscoisados[i] = code[i] * 1;
        }
        else
        {
            numeroscoisados[i] = code[i] * 3;
        }
        somacoisa = somacoisa + numeroscoisados[i];
    }
    calculo = 10 - (somacoisa % 10);
    if (code[12] != calculo)
    {
        cout << "ERRO " << calculo << " UlissesGG";
    }
    else if (code[12] == calculo)
    {
        cout << "OK, JP";
    }
}