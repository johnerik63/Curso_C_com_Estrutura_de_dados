#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Exercicio de condicionais
    /*Exercício 1: Faça um programa que leia dois
    números inteiros e imprima na tela se a soma deles
    é:
    maior/igual a 10 ou menor que 10.*/

    int a, b;
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);
    int soma = a + b;
    if(soma >= 10){
        printf("A soma %d + %d é maior ou igual a 10.", a, b);
    }else{
        printf("A soma %d + %d é menor que 10.", a, b);
    }

     /*Exercício 2: Faça um programa que leia dois números
    inteiros e imprima na tela qual é o maior ou s eles são iguais.*/

    int c, d;
    printf("\nDigite um número: ");
    scanf("%d", &c);
    printf("Digite outro número: ");
    scanf("%d", &d);
    if(c > d){
        printf("O valor %d é maior que %d. ", c, d);
    }else if(a < b){
        printf("O valor %d é menor que %d. ", c, d);
    }else{
        printf("O valor %d é igual a %d. ", c, d);
    }

     /*Exercício 3: Faça um programa que leia um
     número inteiro e informe se ele é par ou impar.*/
     int e;

     printf("\nDigite um número: ");
     scanf("%d", &e);
     if(e % 2 == 0){
        printf("O número que você digitou é par!");
     }else{
         printf("O número que você digitou é ímpar!");
     }



}









