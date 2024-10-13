#include<stdio.h>
#include<stdlib.h>


/* EXERCICIO: Crie uma matriz, usando alocação dinâmica de memória, que receba o tamanho pelo usuário e que a diagonal principal dessa matriz seja igual a 2*/


int main(){
    int linhas, colunas;
    int **matriz;
    int i, j;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    printf("\n");

    matriz = (int**) malloc(linhas*sizeof(int*));

    for (i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(linhas*sizeof(int));
    }
     for(i=0; i< linhas; i++){
        for (j=0; j< colunas; j++){
            if (i == j) {
                matriz[i][j] = 2;
                printf("%d   ", matriz[i][j]);
            } else {
                matriz[i][j] = i + j;
                printf("%d   ", matriz[i][j]);
            }
            
        }
        printf("\n");
     }
     free(matriz);
    return 0;
}