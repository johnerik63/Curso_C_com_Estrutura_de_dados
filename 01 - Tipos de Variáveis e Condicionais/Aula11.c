#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //conectivos l�gicos
    //conectivo E = &&. conectivo OU = ||

    int a, b, c, d;
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &a);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &b);

    if (a>= 18 && b>=18){
        printf("Ambos s�o de maior. Podem entrar na festa!");
    }else{
        printf("Ops, temos algum problema!");
    }


    printf("\nDigite a idade da primeira pessoa: ");
    scanf("%d", &c);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &d);

    if(c >=18 || d>=18){
        printf("Temos uma pessoa respons�vel (de maior). Podem entrar no cinema!");
    }else{
        printf("N�o temos ning�m de maior!");
    }
}
