#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //EX01: Fa�� um programa que leia um n�mero
    //inteiro e imprima na tela se ele est� entre 0 e 10.

    int a;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &a);

    if (1 <= a && a <= 10){
        printf("O n�mero digitado � %d et� entre 0 e 10.", a);
    }else{
        printf("O n�mero digitado n�o est� entre 0 e 10.");
    }

}
