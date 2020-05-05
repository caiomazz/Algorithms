#include <iostream>

using namespace std;

int main()
{
   float valorProduto, valorPago, troco;

   cout<<"Informe o valor do Produto: ";
   cin>> valorProduto;

   cout<<"Valor recebido pelo cliente: ";
   cin>> valorPago;

   troco = valorPago - valorProduto;

   cout<<"Devolva R$" <<troco;

    return 0;
}
