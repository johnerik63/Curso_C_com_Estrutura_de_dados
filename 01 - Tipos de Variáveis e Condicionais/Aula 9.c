#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //condicionais matemáticos e diferente

    //definindo variáveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //maior
    if(a > 2){
        printf("\n %d é maior que 2.", a);
    }
    //maior ou igual
    if(c >= b){
        printf("\n%d é maior ou igual que %d", c, b);
    }
    //menor
    if(a < 10){
        printf("\n %d é menor que 10", a);
    }
    //menor ou igual
    if(a <= 10){
        printf("\n %d é menor ou igual que 10", a);
    }
    //diferente
    if(c != 10){
        printf("\n%d é diferente de 10", c);
    }

    if(d != b){
        printf("\n%c é diferente de %d", d, b);
    }
}
