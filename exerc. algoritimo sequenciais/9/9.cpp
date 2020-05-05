#include <iostream>

using namespace std;

int main()
{
    float s1, c1, c2, s2;

    cout<<"Salario: ";
    cin>> s1;

    cout<<"Conta atrasada 1 com 2% de juros: ";
    cin>> c1;

    cout<<"Conta atrasada 2 com 2% de juros: ";
    cin>> c2;

    s2 = s1 - (c1 * 1.02) - (c2 * 1.02);

    cout<<"Resto do Salario: R$" <<s2;
    return 0;
}
