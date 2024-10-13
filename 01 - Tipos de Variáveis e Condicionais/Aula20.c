#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    srand(time(NULL));

    int dado1 = (rand()%6) + 1;
    printf("Resultado dado 1 = %d", dado1);
    int dado2 = (rand()%6) + 1;
    printf("\nResultado dado 2 = %d", dado2);
    int dado3 = (rand()%6) + 1;
    printf("\nResultado dado 3 = %d", dado3);

    printf("\n----------------------------------------------");
    printf("\nA soma dos resultados dos dados é: %d", dado1 + dado2 +dado3);
    printf("\n----------------------------------------------");
}
