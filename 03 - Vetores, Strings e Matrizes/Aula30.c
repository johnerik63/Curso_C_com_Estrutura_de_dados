#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3


void main(){
    setlocale(LC_ALL, "");
    //vetores: servem para armazenar vários valores em uma variável

    float vetorDeFloat[TAM] = {};
    int i;
    for(i = 0; i < TAM; i++){
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &vetorDeFloat[i]);
    }
    float media;
    media = ((vetorDeFloat[0] + vetorDeFloat[1] + vetorDeFloat[2])/TAM);
    printf("\n---------------------------------------------------------------");
    printf("\nA média dos valores %.2f, %.2f e %.2f é: %.2f", vetorDeFloat[0], vetorDeFloat[1], vetorDeFloat[2], media);
    printf("\n---------------------------------------------------------------");
}
