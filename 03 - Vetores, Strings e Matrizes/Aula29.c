#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 2

void main(){
    setlocale(LC_ALL, "");
    //vetores: servem para armazenar v�rios valores em uma vari�vel
    int vetorDeInt[] = {1, 2, 3, 4};
    float vetorDeFloat[3] = {1.5, 2.2, 3.0};
    char vetorDeChar[TAM] = {'a', 'b'};
    int i;
    for(i = 0; i < 4; i++){
        printf("\n%d", vetorDeInt[i]);
    }
    vetorDeInt[0] = 9;
    printf("\nO valor atualizado �: %d", vetorDeInt[0]);

    printf("\nO valor da posi��o zero do vetorDeChar �: %c", vetorDeChar[0]);
    printf("\nO valor da posi��o zero do vetorDeFloat �:%f", vetorDeFloat[0]);

    //modificando valor por atribui��o

    float novoValor = 5.0;
    vetorDeFloat[2] = novoValor;
    printf("\nO novo valor atribuido � posi��o dois do vetorDeFloat �:%f", novoValor);
    printf("\nO valor da posi��o dois do vetorDeFloat atualizado �%f", vetorDeFloat[2]);

    printf("\nDigite uma letra nova: ");
    fflush(stdin);
    scanf("%c", &vetorDeChar[0]);
    printf("\nO elemento da posi��o zero do vetorDeChar agora �: %c", vetorDeChar[0]);
}
