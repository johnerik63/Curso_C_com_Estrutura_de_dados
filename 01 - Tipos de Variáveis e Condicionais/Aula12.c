#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //EX01: Façã um programa que leia um número
    //inteiro e imprima na tela se ele está entre 0 e 10.

    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    if (1 <= a && a <= 10){
        printf("O número digitado é %d etá entre 0 e 10.", a);
    }else{
        printf("O número digitado não está entre 0 e 10.");
    }

}
