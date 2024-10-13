#include <stdio.h>
#include <stdlib.h>

//Crie um programa com vetores que calcule a media entre 5 valores dados pelo usuario.

void calcularMedia(float *vetor, int n){
    int i;
    float media;
    float soma = 0;
    for(i = 0; i < n; i++){
        soma += vetor[i];
    }
    media = soma / n;
    printf("\n");
    printf("\n-----------------------------------");
    printf("\n==> A media das notas e: %.1f <===", media);
    printf("\n-----------------------------------");

    printf("\n");

}
int main(){
    int n;
    int i;
    while (true){
        printf("\nQuantas notas voce quer digitar? ");
        scanf("%d", &n);
        float vetor[n];
        for (i = 0; i < n; i++){
            printf("\nDigite o valor [%d]: ", i);
            scanf("%f", &vetor[i]);

        }
    
        calcularMedia(vetor, n);
    }
     return 0; 
}