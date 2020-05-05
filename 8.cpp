#include <iostream>

using namespace std;

int main()
{
    float p1, p2, p3, mult, media;

    cout<<"Informe a nota da primeira prova, peso 2: ";
    cin>>p1;

    cout<<"Informe a nota da segunda prova, peso 4: ";
    cin>>p2;

    cout<<"Informe a nota da terceira prova, peso 6: ";
    cin>>p3;

     media = (p1 * 2 + p2 * 4 + p3 * 6) / 12;

    cout<<"A média do aluno foi de: " <<media;
    return 0;
}
