#include<stdio.h>
#include<stdlib.h>

int main(){
    //Definindo variáveis
    int linhas = 3, colunas = 3;
    int **matriz;
    int i, j;

    //alocando as linhas 
    matriz = (int**) malloc(sizeof(int*)*linhas);
    //alocando memoria para fada coluna das linhas
    for (i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas*sizeof(int));
    }
    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}