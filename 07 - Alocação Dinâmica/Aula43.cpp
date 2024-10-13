#include<stdio.h>
#include<stdlib.h>
#include "fazSoma.h"



int main(){
    int a;
    int x;
    int y;
    int continuar;
    while(true){
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &x);
        printf("Digite o segundo valor: ");
        scanf("%d", &y);
    
        a = fazSoma(x, y);
        printf("\n----------------------------------");
        printf("\n==> A soma dos valores eh: %d <==", a);
        printf("\n----------------------------------\n");


    }
    
    return 0;
}