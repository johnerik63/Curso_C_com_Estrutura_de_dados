#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3


void main(){
    setlocale(LC_ALL, "");
    //vetores: servem para armazenar v�rios valores em uma vari�vel

    float vetorDeFloat[TAM] = {};
    int i;
    for(i = 0; i < TAM; i++){
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &vetorDeFloat[i]);
    }
    float media;
    media = ((vetorDeFloat[0] + vetorDeFloat[1] + vetorDeFloat[2])/TAM);
    printf("\n---------------------------------------------------------------");
    printf("\nA m�dia dos valores %.2f, %.2f e %.2f �: %.2f", vetorDeFloat[0], vetorDeFloat[1], vetorDeFloat[2], media);
    printf("\n---------------------------------------------------------------");
}
