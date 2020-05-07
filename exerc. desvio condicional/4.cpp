#include <iostream>

using namespace std;
 /*Faça um programa que solicita a data de nascimento de uma pessoa e a data atual e exiba a
idade desta pessoa em anos (A data deve ser armazenada em 3 variáveis inteiras para ano, mês e dia).*/
int main()
{
    int anoNasc, anoAtual, mesNasc, mesAtual, diaNasc, diaAtual, idade;

    cout<<"Digite a data atual no formato 'DD MM AAAAA': ";
    cin>> diaAtual >> mesAtual >> anoAtual;

    cout<<"Digite a data do seu nascimento no formato 'DD MM AAAAA': ";
    cin>> diaNasc >> mesNasc >> anoNasc;


    if(mesNasc < mesAtual or mesNasc == mesAtual and diaNasc <= diaAtual) {
        idade = anoAtual - anoNasc;
    } else {
        idade = anoAtual - anoNasc -1;
    }

    cout<<"Sua idade eh: " << idade;
    return 0;
}
