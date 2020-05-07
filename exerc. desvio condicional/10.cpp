//Exercicio 10//
#include <iostream>

using namespace std;
/*Faça um programa que solicita ao usuário três valores correspondentes aos lados de um
triângulo. Informe se o triângulo é eqüilátero (possui 3 lados iguais), isósceles (possui dois
lados iguais) ou escaleno (não possui lados iguais). Saídas:
• Pedido para o usuário = "Digite três números inteiros: ";
• Caso equilátero = “O triângulo é equilátero”;
• Caso isósceles = ”O triângulo é isósceles”;
• Caso escaleno = “O triângulo é escaleno”.*/
int main()
{
    int lado1, lado2, lado3;

    cout<<"Digite tres numeros inteiros: ";
    cin>> lado1 >> lado2 >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout<<"O triangulo eh equilatero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout<<"O triangulo eh isosceles";
    } else {
        cout<<"O triangulo eh escaleno";
    }
    return 0;
}
