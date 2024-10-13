#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Preencha uma matriz 2x2 lendo valores do usuário e
   //depois troque os valores entre a primeira e a segunda linha.
    printf("EX: Preencha uma matriz 2x2 lendo valores do usuário e depois troque os valores entre a primeira e a segunda linha.\n");
    int minhaMatriz[2][2], i , j;
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um valor para [%d][%d]: ", i, j);
            scanf("%d", &minhaMatriz[i][j]);
        }
    }

    //Lendo valores para matriz
    printf("----\n");
    for (i = 1; i > -1; i--){
        for(j = 0; j < 2; j++){
            printf("%d  ", minhaMatriz[i][j]);
        }
        printf("\n");
    }
    printf("----");
}
