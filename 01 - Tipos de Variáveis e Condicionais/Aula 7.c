#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Exerc�cio: Crie um algoritimo que leia 3 numeros de uma vez s�
    //coloque o resultado da multiplica��o entre os 3 em uma vari�vel pr�pria
    //depois exiba essa vari�vel
    int a, b, c;
    printf("Digite 3 n�meros: ");
    scanf("%d %d %d", &a, &b, &c);

    int resultado = a*b*c;

    printf("O valor de a x b x c = %d", resultado);

}
