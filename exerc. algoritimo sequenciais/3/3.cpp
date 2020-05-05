#include <iostream>

using namespace std;

int main()
{
    float precoQuilo, qntdQuilo, valorPagar;

    cout<<"Qual o valor do quilo? ";
    cin>>precoQuilo;

    cout<<"Informe a quantidade de quilos: ";
    cin>> qntdQuilo;

    valorPagar = precoQuilo * qntdQuilo;

    cout<<"O valor a ser pago é de R$" <<valorPagar;

    return 0;
}
