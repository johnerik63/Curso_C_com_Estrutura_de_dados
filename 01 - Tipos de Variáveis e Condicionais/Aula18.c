#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX06: Faça um programa, que leia dois valores e mostre
    as opções de somar ou subtrair. Após selecionar a opção
    será mostrado na tela baseado em um Switch.*/

    float a, b;
    printf("Digite um número inteiro: ");
    scanf("%f", &a);
    printf("Digite outro número inteiro: ");
    scanf("%f", &b);
    printf("\n====== Menu de operações ======");
    printf("\n1- Adição;                   ");
    printf("\n2- Subtração;                ");
    printf("\n3- Divisão;                  ");
    printf("\n4- multiplicação;            ");
    printf("\n===============================");
    int opcao;
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\n-------------------------------");
            printf("\n%f + %f = %f", a, b, a+b);
            printf("\n-------------------------------");
            break;
        case 2:
            printf("\n-------------------------------");
            printf("\n%f - %f = %f", a, b, a-b);
            printf("\n-------------------------------");
            break;
        case 3:
            printf("\n-------------------------------");
            printf("\n%f x %f = %f", a, b, a/b);
            printf("\n-------------------------------");
            break;
        case 4:
            printf("\n-------------------------------");
            printf("\n%f / %f = %f", a, b, a*b);
            printf("\n-------------------------------");
            break;
        default:
            printf("\n-------------------------------");
            printf("OPÇÃO INVÁLIDA!");
            printf("\n-------------------------------");
            break;

    }
}
