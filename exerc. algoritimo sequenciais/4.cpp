#include <iostream>

using namespace std;

int main()
{
    float produto, imposto;

    cout<<"Informe um valor: ";
    cin>>produto;

    imposto = produto + 15.0 / 100 * produto;

    cout<<"Com acressimo de 15% o valor fica = " <<imposto;
    return 0;
}
