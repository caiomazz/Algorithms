#include <iostream>

using namespace std;
/*Fa�a um programa que solicita ao usu�rio seu nome e as notas de tr�s provas. Calcule a m�dia
aritm�tica e informe se o aluno foi Aprovado ou Reprovado (o aluno � considerado aprovado
com a m�dia igual ou superior a 6). Sa�das:
� Pedido ao usu�rio = "Digite as notas a seguir:";
� Caso nota maior que 6 = �Voc� foi aprovado�;
� Caso nota menor que 6 = �Voc� foi reprovado�
*/
int main()
{
    char nome;
    float nota1, nota2, nota3, media;

    cout<<"Digite as notas a seguir: ";
    cin>> nota1 >> nota2 >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 6) {
        cout<<"Voce foi aprovado!";
    } else {
        cout<<"Voce foi reprovado!";
    }
    return 0;
}
