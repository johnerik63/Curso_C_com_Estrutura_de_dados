#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Definindo vari�veis
    int a = 6, opcao = 2;
    float b = 2.5;
    char c = 'x';
    //Criando Condicionais
    //condicional simples
    if(a == 5) {
        printf("A vari�vel a = %d", a);
    }
    if(b == 2.5){
        printf("\nA vari�vel b = %f", b);
    }
    if(c == 'x'){
        printf("\nA vari�vel c = %c", c);
    }
    //numero par ou impar
    if (a % 2 == 1){
        printf("\nA vari�vel a � �mpar!");
    }else{
        printf("\nA vari�vel � Par!");
    }

    //condicionais compostas
    if(opcao == 1){
        printf("\nop��o = %d", opcao);
    }else if(opcao == 2){
        printf("\nop��o = %d", opcao);
    }else {
        printf("\nop��o = %d", opcao);
    }



}
