#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>


using namespace std;

void imprimeVetor(int *vetor, int n){
    int i;
    for(i = 0; i < n; i++){
        cout << "\n" << vetor[i];
    }
}

void modificaVetor(int *vetor, int n){
    int i;
    for(i = 0; i < n; i++){
        cout << "\n" << vetor[i] + 1;
    }
}

int main(){
    int n;
    int v[3] = {1, 2, 3};

    //imprimindo vetor

    cout << "Resultado da primeira funcao:";
    imprimeVetor(v, 3);
    cout << "\n";
    cout << "Resultado da segunda funcao:";
    modificaVetor(v, 3);


    return 0;
}