#include <iostream>

using namespace std;

int main()
{
    int cavalos, ferraduraCavalo, totalFerradura;

    cout<<"Informe a quantidade de cavalos: ";
    cin>>cavalos;

    ferraduraCavalo = 4;

    totalFerradura = cavalos * ferraduraCavalo;

    cout<<"Voc� ir� precisar de " <<totalFerradura <<" ferraduras";

    return 0;
}
