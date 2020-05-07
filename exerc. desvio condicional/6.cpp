#include <iostream>

using namespace std;

    /*Faça um programa que exiba o maior dentre dois números reais digitados pelo usuário. Caso
eles sejam iguais exiba uma mensagem correspondente. Saídas:
• Pedido ao usuário = "Digite dois números reais:";
• Caso eles sejam iguais = “Eles são iguais”.
• Caso sejam diferentes exiba somente o numero desejado.*/
int main()
{
    float numero, numero2;

    cout<<"Digite dois numeros reais (N1 N2):";
    cin >> numero >> numero2;

    if(numero > numero2) {
        cout<<numero;
    } else if (numero2 > numero){
        cout<<numero2;
    } else {
        cout<<"Ele sao iguais";
    }
    return 0;
}
