#include <iostream>

using namespace std;

int main()
{
    /* Fa�a um programa que solicita ao usu�rio um valor inteiro e exibe uma mensagem informando
se o n�mero � par ou �mpar. Sa�das:
� Pedido ao usu�rio = "Entre com um numero inteiro:";
� Caso verdadeiro = �O n�mero � par�;
� Caso falso = �O n�mero � �mpar�.*/

    int num;

    cout<< "Entre com um numero inteiro:";
    cin>> num;

    if(num % 2 == 0) {
        cout<< "O numero eh par";
    } else {
        cout<< "O numero eh impar";
    }

    return 0;
}
