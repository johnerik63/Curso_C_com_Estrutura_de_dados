#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define LINHA 5
#define COLUNA 6
#define LINHA_2 2
#define COLUNA_2 2

void main(){
    setlocale(LC_ALL, "");
    //Matrizes são vetores multidimensionais
    int matriz[LINHA][COLUNA] = {{1, 2, 3, 6, 4, 3},{1, 2, 0, 6, 1, 3},{1, 0, 3, 6, 4, 3},{1, 0, 3, 9, 4, 3},{1, 2, 3, 6, 4, 3}};
    int i, j;
    printf("-----------------------\n");
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");
    }
    //EX: Preencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha
    int matriz_2[LINHA_2][COLUNA_2] = {{2,6},{7,8}};
    int k, l;
    printf("-----------------------\n");
    printf("-----\n");
    for (k = 0; k < LINHA_2; k++){
        for(l = 0; l < COLUNA_2; l++){
            printf("%d  ", matriz_2[k][l]);
        }
        printf("\n");
    }
    int m, n;
    printf("-----\n");
    for(m = 1; m > -1; m--){
        for (n = 0; n < COLUNA_2; n++){
            printf("%d  ", matriz_2[m][n]);
        }
        printf("\n");
    }
    printf("-----\n");




}
