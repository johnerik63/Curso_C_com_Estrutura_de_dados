#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX05: Fa�a um programa que leia dois n�meros inteiros e imprime
    na tela se a soma deles estiver entre 0 e 10 ou se a soma for par.*/

    int a, b;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &b);
    int soma = a + b;
    if((0<= soma <= 10) || (soma % 2 == 0)){
        printf("A soma entre %d e %d est� entre 0 e 10.", a, b);
        printf("\nOu a soma � par!");
   }
}

