#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    //La�os de repeti��o: While;
    //enquanto(determinada compara��o for verdadeira)
    //execute{fa�a alguma coisa;}

    int i;
    printf("Digite um valor: ");
    scanf("%d", &i);

    while(i > -1){
    printf("%d \n", i);
    i = i-1;
    }

    int j;
    while(j != 10) {
        printf("Digite 10: ");
        scanf("%d", &j);
    }
    printf("fim!");

    int a = 0;
    int b = 0;

    while(a < 10 || b < 10){
        printf("\nDigite dois valores maiores que 10. ");

        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);
        printf("\nDigite o segundo valor: ");
        scanf("%d", &b);
    }
    printf("\nfim!");

    //Temos o do/while.. a diferen�a � que no do/while a gente executa
    //o c�digo pelo menos uma vez.

    return 0;
}


