#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX02: Fa�a um programa que leia 3 n�meros inteiros e
    imprima na tela se os 3 s�o maiores que 10.*/

    int a, b, c;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro n�mero inteiro: ");
    scanf("%d", &c);

    if(10 < a  && 10 < b  && 10 < c){
        printf("Os n�meros %d, %d e %d s�o maiores que 10", a, b, c);
    }else{
        printf("Algum dos n�meros � menor que 10.");
    }

}
