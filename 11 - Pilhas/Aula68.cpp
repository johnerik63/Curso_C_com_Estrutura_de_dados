#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#define TAM 10

using namespace std;

bool pilha_vazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

bool pilha_cheia(int topo){
    if(topo == TAM - 1){
        return true;
    }else{
        return false;
    }
}
int pilha_tam(int topo){
    return topo + 1;
}
void imprime_vetor(int vetor[TAM], int topo){
    int cont;

    for (cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << ", ";
    }
    printf("\n");
    cout << "Topo: " << topo;
}

void pilha_push(int pilha[TAM], int valor, int *topo){
    if(pilha_cheia(*topo)){
        cout << "Pilha Cheia!!";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){
        printf("A pilha está vazia");
    }else{
        cout << "\nValor Removido:" << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
        printf("\n");
    }
}

void pilha_construtor(int pilha[TAM], int *topo){
    *topo = -1;
    int cont;
    for(cont=0; cont < TAM; cont++){
        pilha[cont] = 0;
    }
}

int pilha_get(int pilha[TAM], int *topo){
    if (pilha_vazia(*topo)){
        cout << "A pilha está vazia!";
        return 0;
    }else{
        return pilha[*topo];
    }
}
int main(void){
    int pilha[TAM];
    int topo; //topo da pilha

    pilha_construtor(pilha, &topo);

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

    printf("\n");
    printf("Imprimindo vetor empilhado: ");
    imprime_vetor(pilha, topo);
    printf("\n");
    cout << "Tamanho do vetor: " << pilha_tam(topo);
    

    
    pilha_pop(pilha, &topo);
    printf("\n");
    printf("Imprimindo vetor com valores retirados: ");
    imprime_vetor(pilha, topo);
    printf("\n");


    cout << "Ultimo valor da pilha: " << pilha_get(pilha, &topo);
    printf("\n");


    cout << "Tamanho do vetor: " << pilha_tam(topo);

}