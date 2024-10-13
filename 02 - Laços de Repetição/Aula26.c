#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    /*EX: Crie um algoritimo que imprima na tela os numeros
    pares de 10 até 20*/

    int i;
    for (i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("\n%d (par)", i);
        }else{
            printf("\n%d (ímpar)", i);
        }
    }

}

