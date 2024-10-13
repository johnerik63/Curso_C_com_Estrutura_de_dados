#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    //definindo uma variável
    int a = 5;

    //imprimindo a variável a
    printf("%d", a);
    //concatenando
    printf("\nO valor da var a é = %d", a);
    //mudando o valor de a
    a = 15;
    printf("\nO valor da var a é = %d", a);

    //pedinfo um número pra b
    int b;

    scanf("&d", &b);

    printf("o valor da var b é = %d", b);

    //pular linha
    printf("\n");

    printf("Uhuuuu!");

    system("pause");
}

