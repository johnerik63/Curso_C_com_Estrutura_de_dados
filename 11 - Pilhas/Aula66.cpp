#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]){
    int cont;

    for (cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << "-";
    }
    printf("\n");
}

void pilha_push(int pilha[TAM], int valor, int *topo){
    if(*topo == TAM - 1){
        cout << "Pilha Cheia";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

int main(void){
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1; //topo da pilha


    imprime_vetor(pilha);

    
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);

    imprime_vetor(pilha);







    return 0;
}