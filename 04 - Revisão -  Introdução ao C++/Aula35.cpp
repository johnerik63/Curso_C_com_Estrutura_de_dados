#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    int meuVetor[2][3] = {{1, 2, 3},{2, 5, 8}};
    int i;
    //Definindo vetores
    int vetor[3];
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 40;
    //imprimindo valores de um vetor
    for(i = 0; i < 3; i ++){
        cout << vetor[i] << "\n";
    }

    i =0;

    while (i < 3){
        cout << vetor[i] << '\n';
        i ++;
    }
    int k, j;
    for(k = 0; k < 3; k++ ){
        for(j = 0; j < 4; j++){
            cout << meuVetor[k][j];
        }
        cout << "\n";
    }
    return 0;
}