#include <iostream>
/*Faça um programa que solicita ao usuário um número inteiro e exibe este na tela. Se o
número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.*/
using namespace std;

int main()
{
    int num;

    cout<<"Insira um valor: ";
    cin>> num;

    if (num < 0) {
        num = num * -1;
    } else {
        num = num;
    }

    cout << num;
    return 0;
}
