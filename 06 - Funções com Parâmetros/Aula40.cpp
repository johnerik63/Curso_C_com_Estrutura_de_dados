#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

int retornaSoma(int a, int b){
    return a + b;
}

int main(){
    int a,b;

    printf("Me de dois valores e veja a soma entre eles.");
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &b);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &a);
    
    //Printando Resultado
    printf("\nA soma entre %d e %d e: %d", a, b, retornaSoma(a, b));


    return 0;
}