#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //crie um algoritmo que leia duas notas e mostre a m�dia entre elas

    //definindo vari�veis
    float nota1, nota2, resultado;

    //lendo o primeiro valor
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    //lendo o segundo valor
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    //c�lculo da m�dia
    resultado = (nota1+nota2)/2;
    printf("A m�dia entre %f e %f �: %f", nota1, nota2, resultado);

}
