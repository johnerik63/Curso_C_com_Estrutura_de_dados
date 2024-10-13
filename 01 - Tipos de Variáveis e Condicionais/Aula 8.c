#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Definindo variáveis
    int a = 6, opcao = 2;
    float b = 2.5;
    char c = 'x';
    //Criando Condicionais
    //condicional simples
    if(a == 5) {
        printf("A variável a = %d", a);
    }
    if(b == 2.5){
        printf("\nA variável b = %f", b);
    }
    if(c == 'x'){
        printf("\nA variável c = %c", c);
    }
    //numero par ou impar
    if (a % 2 == 1){
        printf("\nA variável a é ímpar!");
    }else{
        printf("\nA variável é Par!");
    }

    //condicionais compostas
    if(opcao == 1){
        printf("\nopção = %d", opcao);
    }else if(opcao == 2){
        printf("\nopção = %d", opcao);
    }else {
        printf("\nopção = %d", opcao);
    }



}
