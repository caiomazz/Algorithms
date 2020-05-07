#include <iostream>

using namespace std;
/* Faça um programa que solicita ao usuário dois números inteiros. O primeiro é o valor das
horas e o segundo dos minutos. Verifique se a hora é válida e exiba uma mensagem
correspondente (considere a hora 24:00 como inválida). Saídas:
• Pedido para horas = "Entre com um número para as horas: ";
• Pedido para os minutos = "Entre com um número para os minutos:";
• Caso verdadeiro = “A hora é válida”;
• Caso falso = ”A hora é inválida”.*/
int main()
{
    int minuto, hora;

    cout<<"Entre com um numero para as horas: ";
    cin>> hora;

    cout<<"Entre com um numero para os minutos: ";
    cin>> minuto;

    if(hora >= 0 and hora < 24 and minuto >= 0 and minuto < 60) {
        cout<<"A hora é valida";
    } else {
        cout<<"A hora é invalida";
    }
    return 0;
}
