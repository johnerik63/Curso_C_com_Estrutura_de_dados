#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "");
    //Como gerar um número aleatório em C?
    //Usa o tempo atual como uma semente

    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = rand()%10;

    //imprime o número gerado
    printf("Numero gerado: %d", r);

    //E se eu quiser de 5 até 14?
    int r2 = (rand()%10) + 5;

    printf("\nNumero gerado: %d", r2);

    //Uma outra forma de fazer isso é definindo variáveis
    int maximo = 14;
    int minimo = 5;
    //                  14   -   5     +  1 = 10
    int r3 = (rand()%(maximo - minimo) + 1) + minimo;
    printf("\nNumero gerado: %d", r3);

    return 0;
}
