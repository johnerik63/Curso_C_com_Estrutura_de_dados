#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX04: Fa�a um programa que leia 2 n�meros inteiros
    e imprima na tela se algum for par.*/
    int a, b;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &b);
    if ((a % 2 == 0) || (b % 2 == 0)){
        printf("Dentre os n�meros digitados tem pelo menos um que � par!");

    }else{
        printf("N�o tem nenhum n�mero par dentre os inteiros digitados.");
    }

}
