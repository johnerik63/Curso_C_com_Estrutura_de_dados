#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Exercicio de condicionais
    /*Exerc�cio 1: Fa�a um programa que leia dois
    n�meros inteiros e imprima na tela se a soma deles
    �:
    maior/igual a 10 ou menor que 10.*/

    int a, b;
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);
    int soma = a + b;
    if(soma >= 10){
        printf("A soma %d + %d � maior ou igual a 10.", a, b);
    }else{
        printf("A soma %d + %d � menor que 10.", a, b);
    }

     /*Exerc�cio 2: Fa�a um programa que leia dois n�meros
    inteiros e imprima na tela qual � o maior ou s eles s�o iguais.*/

    int c, d;
    printf("\nDigite um n�mero: ");
    scanf("%d", &c);
    printf("Digite outro n�mero: ");
    scanf("%d", &d);
    if(c > d){
        printf("O valor %d � maior que %d. ", c, d);
    }else if(a < b){
        printf("O valor %d � menor que %d. ", c, d);
    }else{
        printf("O valor %d � igual a %d. ", c, d);
    }

     /*Exerc�cio 3: Fa�a um programa que leia um
     n�mero inteiro e informe se ele � par ou impar.*/
     int e;

     printf("\nDigite um n�mero: ");
     scanf("%d", &e);
     if(e % 2 == 0){
        printf("O n�mero que voc� digitou � par!");
     }else{
         printf("O n�mero que voc� digitou � �mpar!");
     }



}









