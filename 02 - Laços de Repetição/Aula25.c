#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

void main(){
    setlocale(LC_ALL, "");
    //constantes: serve para definir uma variável que não vai mudar no código
    printf("%d", TAM);

    int i;

    for(i = 1; i < TAM; i++){
        printf("\n%d", i);
    }
    /*EX: Crie um algoritimo que imprima os números de 10 a 0.
    de forma regressiva (usando While, do While ou For e uma constante)*/

    int j = TAM;
    while(j >= 0){
        printf("\n==========");
        printf("\n%d", j);
        j -= 1;
    }
    int k = 10;
    do{
        printf("\n==========");
        printf("\n%d", k);
        k -= 1;
    }while(k >= 0);

    int u;
    for (u = 10; u >= 0; u--){
        printf("\n==========");
        printf("\n%d", u);
    }



}
