#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    //La�os de Repeti��o FOR
    /*Vamos fazer tudo que o wjile faz em uma linha*/

    int i;
    int soma;
    /*EX01: Fa�a um programa que mostre a soma de todos os n�meros
    de 0 a 10, adicionando o valor i numa nova variavel soma, a cada
    repeti��o do la�o for*/

    for(i = 0; i < 10; i += 1){
        printf("\ni = %d(soma: %d)", i, soma);
        soma = soma + i;
    }
    printf("\nSoma: %d", soma);

    /*EX02: Fa�a um programa que mostre a tabuada de um n�mero
    informado pelo usu�rio*/

    int num;
    int j;
    printf("\nDigite um n�mero: ");
    scanf("%d", &num);
    printf("\n------------");
    for (j = 0; j <= 10; j+=1 ){
        printf("\n %d x %d = %d", j, num, j*num);
        printf("\n------------");
    }
    /*Fa�a um programa em que o usu�rio informe um valor inicial, um valor
    final e de quanto em quanto o valor de I ser� modificado e imprima
    todos os valores no intervalo informado com os passos informados.*/

    int inicio;
    int fim;
    int passo;
    int k = 0;

    printf("\nDigite o valor inicial: ");
    scanf("%d", &inicio);
    printf("\nDigite o valor final: ");
    scanf("%d", &fim);
    printf("\nDigite de quanto em quanto voc� quer percorrer esse intervalo: ");
    scanf("%d", &passo);


    for (k = inicio; k <= fim; k += passo){
        printf("\n %d", k);
        printf("\n------------");
    }





}
