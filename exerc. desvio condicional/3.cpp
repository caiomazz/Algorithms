#include <iostream>

using namespace std;
/*Fa�a um programa que solicita ao usu�rio uma letra e verifique se ela � uma vogal ou n�o
exibindo uma mensagem correspondente. Sa�das
� Pedido ao usu�rio= "Digite uma letra:";
� Caso verdadeiro = �� uma vogal�;
� Caso falso = �N�o � uma vogal�.*/
int main()
{
    char letra;

    cout<<"Digite uma letra: ";
    cin>> letra;

    if(letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u') {
        cout<<"Eh uma vogal";
    } else {
        cout<<"Nao eh uma vogal";
    }
    return 0;


}
