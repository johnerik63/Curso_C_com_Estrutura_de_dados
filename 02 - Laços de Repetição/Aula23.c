#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    /*EX01: Fa�a um programa que imprima de 50 at� 0.
    diminuindo de 6 em 6;*/

    int i = 50;
    while(i >= 0){
        printf("\n%d", i);
        i = i - 6;
    }
    /*EX02: Fa�a um programa que imprima os n�meros pares de 10
    at� um n�mero informado pelo usu�rio;*/

    int k = 10;
    int j;
    printf("\nDigite um n�mero maior que 10: ");
    scanf("%d", &j);

    while(k <= j){
        if(k % 2 == 0){
            printf("\n%d", k);
        }
        k = k+1;

    }
    /*EX03: Fa�a um programa que mostre a soma de dois n�meros entre
    5 e 10, apenas quando os dois n�meros digitados
    estiverem no intervalo*/

    int a = 0;
    int b = 0 ;

    while(!(5 < a && a < 10)||!(5 < b && b < 10)){
        printf("\nDigite valores entre 5 e 10.");
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);
        printf("\nDigite o segundo valor valor: ");
        scanf("%d", &b);
    }
    printf("A soma dos valores �: %d", a+b);
    return 0;
}
