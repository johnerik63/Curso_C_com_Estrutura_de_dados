#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //crie um algoritmo que leia duas notas e mostre a média entre elas

    //definindo variáveis
    float nota1, nota2, resultado;

    //lendo o primeiro valor
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    //lendo o segundo valor
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    //cálculo da média
    resultado = (nota1+nota2)/2;
    printf("A média entre %f e %f é: %f", nota1, nota2, resultado);

}
