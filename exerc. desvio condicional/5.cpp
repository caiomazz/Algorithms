#include <iostream>

using namespace std;
/* Fa�a um programa que solicita ao usu�rio dois n�meros inteiros. O primeiro � o valor das
horas e o segundo dos minutos. Verifique se a hora � v�lida e exiba uma mensagem
correspondente (considere a hora 24:00 como inv�lida). Sa�das:
� Pedido para horas = "Entre com um n�mero para as horas: ";
� Pedido para os minutos = "Entre com um n�mero para os minutos:";
� Caso verdadeiro = �A hora � v�lida�;
� Caso falso = �A hora � inv�lida�.*/
int main()
{
    int minuto, hora;

    cout<<"Entre com um numero para as horas: ";
    cin>> hora;

    cout<<"Entre com um numero para os minutos: ";
    cin>> minuto;

    if(hora >= 0 and hora < 24 and minuto >= 0 and minuto < 60) {
        cout<<"A hora � valida";
    } else {
        cout<<"A hora � invalida";
    }
    return 0;
}
