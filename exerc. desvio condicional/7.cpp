#include <iostream>

using namespace std;
/*Fa�a um programa que solicita um n�mero inteiro e exibe uma mensagem indicando se ele �
positivo, negativo ou zero. Sa�das:
� Pedido ao usu�rio = "Digite um n�mero inteiro:";
� Caso ele seja positivo = �Ele � positivo�;
� Caso ele seja negativo = �Ele � negativo�;
� Caso ele seja igual a zero = �Ele � igual a zero�.*/
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
