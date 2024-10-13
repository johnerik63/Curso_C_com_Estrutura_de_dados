#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //usando acentos
    setlocale(LC_ALL,"");
    printf("olá, seja bem vindo!\n");

    //escrever o valor de uma variável a
    int a= 30;
    int b= 15;
    printf("O valor da soma de a +b é = %d\n", a+b);

    //escrever e pular pra putra linha
    printf("Olá galera \n aqui estou em outra linha!\n");

    //lendo números inteiros
    printf("O valor de a é = %d", a);
    scanf("%d", &a);
    printf("O valor de a mudou para = %d\n", a);

    //lendo numeros quebrados
    float c = 5.36;
    printf("%f", c);
    scanf("%f", &c);
    printf("O valor de c é = %f", c);

    //lendo letras
    //a função abaixo linba a caixa de entrada que antes recebia inteiros
    fflush(stdin);
    char d = 'h';
    printf("agora minha variavel d é = %c", d);
    scanf("%c", &d);
    printf("\nMinha variavel d mudou para %c", d);

}
