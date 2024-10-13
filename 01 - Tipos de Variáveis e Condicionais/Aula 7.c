#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Exercício: Crie um algoritimo que leia 3 numeros de uma vez só
    //coloque o resultado da multiplicação entre os 3 em uma variável própria
    //depois exiba essa variável
    int a, b, c;
    printf("Digite 3 números: ");
    scanf("%d %d %d", &a, &b, &c);

    int resultado = a*b*c;

    printf("O valor de a x b x c = %d", resultado);

}
