#include <iostream>

using namespace std;
/*Fa�a um programa que solicita ao usu�rio tr�s n�meros reais e exibe na tela apenas o menor
deles*/
int main()
{
    float numero1, numero2, numero3;

    cout<<"Informe tres numeros reais: ";
    cin >> numero1 >> numero2 >> numero3;

    if (numero1 < numero2 && numero1 < numero3 ) {
        cout<<"O menor numero eh: " << numero1;
    } else if (numero2 < numero1 && numero2 < numero3) {
        cout<<"O menor numero eh: " << numero2;
    } else {
        cout<<"O menor numero eh: " << numero3;
    }
    return 0;
}
