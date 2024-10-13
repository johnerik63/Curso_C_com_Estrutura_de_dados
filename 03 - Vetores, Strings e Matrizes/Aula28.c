#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Definindo uma constante
#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

void main(){
    setlocale(LC_ALL, "");
    // Constantes
    //Definindo uma constante dentro da função main
    const int LADO = 10;

    //imprimindo as constantes
    printf("%d \n", CONSTANTE);
    printf("%f \n", QUEBRADO);
    printf("%c \n", LETRA);
    printf("%d \n", LADO);

    return 0;

}
