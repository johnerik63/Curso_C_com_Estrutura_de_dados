#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL,"");
    //definindo vari�veis
    int a = 6, b = 3;
    //soma
    printf("A soma %d + %d � %d.\n", a, b, a + b);
    //subtra��o
    printf("A subtra��o %d - %d � %d.\n", a, b, a - b);
    //divis�o
    printf("A divis�o %d / %d � %d.\n", a, b, a / b);
    //multiplica��o
    printf("A multiplica��o %d x %d � %d.\n", a, b, a * b);
    //resto da divis�o
    printf("O resto da divis�o entre %d e %d = %d\n", a, b, a % b);
    //valor absoluto
    printf("O valor absoluto de -3 � %d.\n", abs(-3));

    system("pause");
}


