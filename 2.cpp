#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float numero, metade;
    cout<<"informe um valor: ";
    cin>> numero;

    metade = numero / 2.0;

    cout<<"A metade deste valor é de: "<<metade;
    return 0;
}
