#include <iostream>

using namespace std;

    /*Fa�a um programa que exiba o maior dentre dois n�meros reais digitados pelo usu�rio. Caso
eles sejam iguais exiba uma mensagem correspondente. Sa�das:
� Pedido ao usu�rio = "Digite dois n�meros reais:";
� Caso eles sejam iguais = �Eles s�o iguais�.
� Caso sejam diferentes exiba somente o numero desejado.*/
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
