#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Crie um algoritmo que leia duas notas e mostre o
    //valor absoluto da difere�a entre elas
    int n1, n2;
    printf("Digine um n�mero: ");
    scanf("%d", &n1);
    printf("Digite um segundo n�mero: ");
    scanf("%d", &n2);
    printf("O valor da diferen�a entre %d - %d = %d", n1, n2, n1-n2);
    printf("\nO valor absoluto �: %d", abs(n1 - n2));


}
