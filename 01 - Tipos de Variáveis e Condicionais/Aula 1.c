#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //usando acentos
    setlocale(LC_ALL,"");
    printf("ol�, seja bem vindo!\n");

    //escrever o valor de uma vari�vel a
    int a= 30;
    int b= 15;
    printf("O valor da soma de a +b � = %d\n", a+b);

    //escrever e pular pra putra linha
    printf("Ol� galera \n aqui estou em outra linha!\n");

    //lendo n�meros inteiros
    printf("O valor de a � = %d", a);
    scanf("%d", &a);
    printf("O valor de a mudou para = %d\n", a);

    //lendo numeros quebrados
    float c = 5.36;
    printf("%f", c);
    scanf("%f", &c);
    printf("O valor de c � = %f", c);

    //lendo letras
    //a fun��o abaixo linba a caixa de entrada que antes recebia inteiros
    fflush(stdin);
    char d = 'h';
    printf("agora minha variavel d � = %c", d);
    scanf("%c", &d);
    printf("\nMinha variavel d mudou para %c", d);

}
