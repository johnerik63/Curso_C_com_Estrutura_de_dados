#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <string>
#include <iostream>
#define TAM 10

//como criar vetores em C.

using namespace std;

void imprime_Vetor(int vetor[TAM]){
    int cont;
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) 
{
    int esquerda = 0; //limite da equerda 
    int direita = TAM - 1; //limite da direita 
    int meio;

    while(esquerda <= direita){
         meio = (esquerda +direita)/2;

        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }

        //ajustando os limites laterais

        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
    }  
    return -1;
}

int main(void){

    int vetor[TAM] = {2,43,56,76,99,9,0,87,5};

    int valorProcurado;
    //int posicao;
    int posicaoEncontrada;

    //imprime o vetor
    
    printf("\nQual valor deseja encontrar? ");
    scanf("%d", &valorProcurado);
    //percorre a lista em busca do valor
    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada << "\n";
    }else{
        cout << "valor nao encontrado";
    }
    return 0;
}
