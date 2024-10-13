#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <string>
#include <iostream>
#define TAM 10

//como criar vetores em C.

using namespace std;

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) {
    int cont;
    bool valorFoiEncontrado;
    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }
     if(valorFoiEncontrado){
        return 1;
    }else {
        return -1;
    }
}
int main(void){

    int vetor[TAM] = {2,43,56,76,99,9,0,87,5};

    int valorProcurado;
    int posicao;
    int posicaoEncontrada;
    int cont;
    bool valorFoiEncontrado;


    //imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
    printf("\nQual valor deseja encontrar? ");
    scanf("%d", &valorProcurado);
    //percorre a lista em busca do valor
    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada << "\n";
    }else{
        cout << "valor n�p encontrado";
    }
    return 0;
}
