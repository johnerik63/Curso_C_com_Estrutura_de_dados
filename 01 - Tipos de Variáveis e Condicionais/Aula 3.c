#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL,"");
    //definindo variáveis
    int a = 6, b = 3;
    //soma
    printf("A soma %d + %d é %d.\n", a, b, a + b);
    //subtração
    printf("A subtração %d - %d é %d.\n", a, b, a - b);
    //divisão
    printf("A divisão %d / %d é %d.\n", a, b, a / b);
    //multiplicação
    printf("A multiplicação %d x %d é %d.\n", a, b, a * b);
    //resto da divisão
    printf("O resto da divisão entre %d e %d = %d\n", a, b, a % b);
    //valor absoluto
    printf("O valor absoluto de -3 é %d.\n", abs(-3));

    system("pause");
}


