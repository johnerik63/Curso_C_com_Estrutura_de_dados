#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 2

void main(){
    setlocale(LC_ALL, "");
    //vetores: servem para armazenar vários valores em uma variável
    int vetorDeInt[] = {1, 2, 3, 4};
    float vetorDeFloat[3] = {1.5, 2.2, 3.0};
    char vetorDeChar[TAM] = {'a', 'b'};
    int i;
    for(i = 0; i < 4; i++){
        printf("\n%d", vetorDeInt[i]);
    }
    vetorDeInt[0] = 9;
    printf("\nO valor atualizado é: %d", vetorDeInt[0]);

    printf("\nO valor da posição zero do vetorDeChar é: %c", vetorDeChar[0]);
    printf("\nO valor da posição zero do vetorDeFloat é:%f", vetorDeFloat[0]);

    //modificando valor por atribuição

    float novoValor = 5.0;
    vetorDeFloat[2] = novoValor;
    printf("\nO novo valor atribuido à posição dois do vetorDeFloat é:%f", novoValor);
    printf("\nO valor da posição dois do vetorDeFloat atualizado é%f", vetorDeFloat[2]);

    printf("\nDigite uma letra nova: ");
    fflush(stdin);
    scanf("%c", &vetorDeChar[0]);
    printf("\nO elemento da posição zero do vetorDeChar agora é: %c", vetorDeChar[0]);
}
