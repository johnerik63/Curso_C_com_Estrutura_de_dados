#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX03: Crie um programa que leia dois n�meros inteiros e
    imprima na tela se algum deles for maior que 10.*/

    int a, b;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &b);

    if(a > 10 || b >10){
        printf("Algum dos n�meros digitados � maior que 10.");
    }else{
        printf("Nenhum dos n�meros digitados � maior que 10.");
    }
}
