#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>

int main(){
    //Definindo variáveis
    int linhas = 5, colunas = 5;
    int **matriz;
    int i, j;

    //alocando as linhas 
    matriz = (int**) new int[linhas];
    //alocando memoria para fada coluna das linhas
    for (i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
    }
    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = i+j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}