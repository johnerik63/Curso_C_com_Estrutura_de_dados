#include<stdio.h>
#include<stdlib.h>


int *alocaVetor(int tamanho){
    //É criado um ponteiro auxiliar
    int *aux;

    //Alocação dinâmica de memória
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

int main(){
    int *vetor, tamanho;
    int i;
    int a;

    //lendo o tamanho do vetor dado pelo usuário;
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);
    vetor = alocaVetor(tamanho);
    vetor[tamanho];
        for (i = 0; i < tamanho; i++){
            printf("\nDigite o valor [%d]: ", i);
            scanf("%d", &a);
            vetor[i] = a;
            
        }
        printf("\n");
        for (i = 0; i < tamanho; i++){
            printf("%d ", vetor[i]);
        }
        printf("\n");
        free(vetor);

    return 0;
}