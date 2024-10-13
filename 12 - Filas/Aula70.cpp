#include<stdio.h>
#include<stdlib.h>
#define TAM 10

// A fila é do formato First In - First Out

void imprime_vetor(int fila[TAM], int tamanho){
    int i;
    printf("\n");
    for (i = 0; i < TAM; i++){
        printf("%d ", fila[i]);
    }

}
void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if (*tras == TAM - 1){
        printf("Fila Cheia!");
        printf("\n");
    }else{
        *tras = *tras + 1;
        fila[*tras] = valor;
    } 
}
void fila_desenfileirar(int fila[TAM], int frente){
    printf("O valor %d foi removido....6\n", fila[frente]);
    fila[frente] = 0;
    fila++;
}
int main(void){
    int frente, tras;
    int fila[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int valor;
    int cont;
    fila_construtor(&frente, &tras);
    
    printf("\n");
    printf("Me de a quantidade de valores que quer colocar no vetor: ");
    scanf("%d", &valor);
    for(cont = 0; cont < valor; cont++ ){
        fila_enfileirar(fila, (cont + 3) , &tras);
    };
    printf("\n");
    printf("Fila com itens adicionados: ");
    printf("\n");
    imprime_vetor(fila, (tras - frente) + 1);
    printf("\n");

    printf("\n");
    printf("quantos valores deseja remover? ");
    scanf("%d", &valor);
    printf("\n");
    for(cont = 0; cont < valor; cont++){
        fila_desenfileirar(fila, frente);
        frente++;
    }
    
    printf("\n");
    printf("Fila com itens removidos:");
    printf("\n");
    imprime_vetor(fila, (tras - frente) + 1);
    printf("\n");
    
    return 0;
}