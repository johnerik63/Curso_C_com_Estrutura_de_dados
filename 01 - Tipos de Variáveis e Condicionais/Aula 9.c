#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //condicionais matem�ticos e diferente

    //definindo vari�veis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //maior
    if(a > 2){
        printf("\n %d � maior que 2.", a);
    }
    //maior ou igual
    if(c >= b){
        printf("\n%d � maior ou igual que %d", c, b);
    }
    //menor
    if(a < 10){
        printf("\n %d � menor que 10", a);
    }
    //menor ou igual
    if(a <= 10){
        printf("\n %d � menor ou igual que 10", a);
    }
    //diferente
    if(c != 10){
        printf("\n%d � diferente de 10", c);
    }

    if(d != b){
        printf("\n%c � diferente de %d", d, b);
    }
}
