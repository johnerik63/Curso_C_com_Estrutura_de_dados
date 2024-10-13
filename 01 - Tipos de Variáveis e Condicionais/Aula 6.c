#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Crie um algoritmo que leia duas notas e mostre o
    //valor absoluto da difereça entre elas
    int n1, n2;
    printf("Digine um número: ");
    scanf("%d", &n1);
    printf("Digite um segundo número: ");
    scanf("%d", &n2);
    printf("O valor da diferença entre %d - %d = %d", n1, n2, n1-n2);
    printf("\nO valor absoluto é: %d", abs(n1 - n2));


}
