#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout<<"De um valor inteiro para A: ";
    cin>>a;

    cout<<"De um valor inteiro para B: ";
    cin>>b;

    c = a;
    a = b;
    b = c;

    cout<<" Valor de A e B são respectivamente: " <<a <<" e " <<b;
    return 0;
}
