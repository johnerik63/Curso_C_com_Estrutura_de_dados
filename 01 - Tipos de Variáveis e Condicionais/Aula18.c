#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX06: Fa�a um programa, que leia dois valores e mostre
    as op��es de somar ou subtrair. Ap�s selecionar a op��o
    ser� mostrado na tela baseado em um Switch.*/

    float a, b;
    printf("Digite um n�mero inteiro: ");
    scanf("%f", &a);
    printf("Digite outro n�mero inteiro: ");
    scanf("%f", &b);
    printf("\n====== Menu de opera��es ======");
    printf("\n1- Adi��o;                   ");
    printf("\n2- Subtra��o;                ");
    printf("\n3- Divis�o;                  ");
    printf("\n4- multiplica��o;            ");
    printf("\n===============================");
    int opcao;
    printf("\nEscolha uma op��o: ");
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
            printf("OP��O INV�LIDA!");
            printf("\n-------------------------------");
            break;

    }
}
