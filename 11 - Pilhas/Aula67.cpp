#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM], int topo){
    int cont;

    for (cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << ", ";
    }
    printf("\n");

    cout << "\nTopo: " << topo;
}

void pilha_push(int pilha[TAM], int valor, int *topo){
    if(*topo == TAM - 1){
        cout << "Pilha Cheia";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *topo){
    if(*topo == -1){
        printf("A pilha está vazia");
    }else{
        cout << "\nValor Removido:" << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

int main(void){
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1; //topo da pilha

    printf("Imprimindo vetor vazio: ");
    imprime_vetor(pilha, topo);
    printf("\n");

    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 12, &topo);
    pilha_push(pilha, 8, &topo);
    pilha_push(pilha, 4, &topo);
    pilha_push(pilha, 9, &topo);
    pilha_push(pilha, 78, &topo);
    pilha_push(pilha, 91, &topo);
    pilha_push(pilha, 6, &topo);
    pilha_push(pilha, 3, &topo);

    printf("Imprimindo vetor empilhado: ");
    imprime_vetor(pilha, topo);
    printf("\n");

    
    pilha_pop(pilha, &topo);
    printf("\n");
    printf("Imprimindo vetor com valores retirados: ");
    imprime_vetor(pilha, topo);


}
