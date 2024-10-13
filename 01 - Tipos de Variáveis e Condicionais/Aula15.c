#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX04: Faça um programa que leia 2 números inteiros
    e imprima na tela se algum for par.*/
    int a, b;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    if ((a % 2 == 0) || (b % 2 == 0)){
        printf("Dentre os números digitados tem pelo menos um que é par!");

    }else{
        printf("Não tem nenhum número par dentre os inteiros digitados.");
    }

}
