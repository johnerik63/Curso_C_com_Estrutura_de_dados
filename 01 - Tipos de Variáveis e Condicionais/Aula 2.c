#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    //definindo uma vari�vel
    int a = 5;

    //imprimindo a vari�vel a
    printf("%d", a);
    //concatenando
    printf("\nO valor da var a � = %d", a);
    //mudando o valor de a
    a = 15;
    printf("\nO valor da var a � = %d", a);

    //pedinfo um n�mero pra b
    int b;

    scanf("&d", &b);

    printf("o valor da var b � = %d", b);

    //pular linha
    printf("\n");

    printf("Uhuuuu!");

    system("pause");
}

