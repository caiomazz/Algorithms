#include <iostream>

using namespace std;

int main()
{
    float distancia, consumo, preco, gasto;

    cout<<"Informe quantos KM ser�o percorridos na viajem: ";
    cin>>distancia;

    cout<<"Informe quantos KM seu carro faz por litro: ";
    cin>>consumo;

    cout<<"Qual o preco da gasolina hoje? ";
    cin>>preco;

    gasto = distancia / consumo * preco;

    cout<<"Voc� ir� gastar R$" <<gasto <<" em gasolina";
}
