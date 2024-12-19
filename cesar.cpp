#include <iostream>
#include <locale.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");
    char abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' },
    frase[100];
    int deslocamento, letras, i, j, posicao;

    cout << "diz-me um numero de letras para a frase\n ";
    cin >> letras;
    cout << "diz um numero(deslocamento)\n ";
    cin >> deslocamento;
    cout << "diz-me uma frase com o numero de letras que disseste\n";
    for (i = 0; i < letras; i++) {
        cin >> frase[i];
    }

    for (i = 0; i < letras; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            for (j = 0; j < 26; j++) {
                if (frase[i] == abc[j]) {
                    posicao = (j + deslocamento) % 26;
                    frase[i] = abc[posicao];
                    break;
                }
            }
        }
        cout << frase[i] << " ";
    }
}
