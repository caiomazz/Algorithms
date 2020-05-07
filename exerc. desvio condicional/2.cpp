#include <iostream>

using namespace std;

int main()
{
    /* Faça um programa que solicita ao usuário um valor inteiro e exibe uma mensagem informando
se o número é par ou ímpar. Saídas:
• Pedido ao usuário = "Entre com um numero inteiro:";
• Caso verdadeiro = “O número é par”;
• Caso falso = “O número é ímpar”.*/

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
