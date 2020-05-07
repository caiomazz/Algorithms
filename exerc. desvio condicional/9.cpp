#include <iostream>

using namespace std;
/*Faça um programa que solicita ao usuário seu nome e as notas de três provas. Calcule a média
aritmética e informe se o aluno foi Aprovado ou Reprovado (o aluno é considerado aprovado
com a média igual ou superior a 6). Saídas:
• Pedido ao usuário = "Digite as notas a seguir:";
• Caso nota maior que 6 = “Você foi aprovado”;
• Caso nota menor que 6 = ”Você foi reprovado”
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
