#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX02: Faça um programa que leia 3 números inteiros e
    imprima na tela se os 3 são maiores que 10.*/

    int a, b, c;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &c);

    if(10 < a  && 10 < b  && 10 < c){
        printf("Os números %d, %d e %d são maiores que 10", a, b, c);
    }else{
        printf("Algum dos números é menor que 10.");
    }

}
