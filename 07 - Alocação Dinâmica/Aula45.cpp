#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<new>

using namespace std;


int main(){
    int tamanho, cont;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    cout << "\n";

    int *vetor = new int[tamanho];

    cout << "Seu vetor com " << tamanho << " elementos:";
    cout << "\n";
    for (cont = 0; cont < tamanho; cont ++ ){
        vetor[cont] = cont;
        printf("%d ", vetor[cont]);
    }

    free(vetor);
}