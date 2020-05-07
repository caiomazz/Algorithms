#include <iostream>

using namespace std;
/*Faça um programa que solicita um número inteiro e exibe uma mensagem indicando se ele é
positivo, negativo ou zero. Saídas:
• Pedido ao usuário = "Digite um número inteiro:";
• Caso ele seja positivo = “Ele é positivo”;
• Caso ele seja negativo = “Ele é negativo”;
• Caso ele seja igual a zero = “Ele é igual a zero”.*/
int main()
{
    int numero;

    cout<< "Digite um numero inteiro: ";
    cin>> numero;

    if (numero > 0) {
        cout<<"Ele eh positivo";
    } else if (numero < 0) {
        cout<<"Ele eh negativo";
    } else {
        cout<<"ele eh igual a zero";
    }

    return 0;
}
