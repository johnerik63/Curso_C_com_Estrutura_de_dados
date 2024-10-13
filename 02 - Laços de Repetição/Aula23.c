#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    /*EX01: Faça um programa que imprima de 50 até 0.
    diminuindo de 6 em 6;*/

    int i = 50;
    while(i >= 0){
        printf("\n%d", i);
        i = i - 6;
    }
    /*EX02: Faça um programa que imprima os números pares de 10
    até um número informado pelo usuário;*/

    int k = 10;
    int j;
    printf("\nDigite um número maior que 10: ");
    scanf("%d", &j);

    while(k <= j){
        if(k % 2 == 0){
            printf("\n%d", k);
        }
        k = k+1;

    }
    /*EX03: Faça um programa que mostre a soma de dois números entre
    5 e 10, apenas quando os dois números digitados
    estiverem no intervalo*/

    int a = 0;
    int b = 0 ;

    while(!(5 < a && a < 10)||!(5 < b && b < 10)){
        printf("\nDigite valores entre 5 e 10.");
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);
        printf("\nDigite o segundo valor valor: ");
        scanf("%d", &b);
    }
    printf("A soma dos valores é: %d", a+b);
    return 0;
}
