#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    // um conjunto de letras s�o vetores de chars
    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a', 'b', 'c', '\0'};


    //imprimindo uma String (sem espa�os)
    printf("%s \n", palavra1);
    printf("%s \n", palavra2);
    printf("%s \n", palavra3);

    //lendo uma String (sem espa�os)
    printf("Digite uma palavra com at� 4 letras: ");
    fflush(stdin);
    scanf("%s", palavra2);

    printf("%s \n", palavra2);

    //lendo uma string(com espa�os)
    char fruta[255];
    printf("Digite uma fruta: ");
    fflush(stdin);
    fgets(fruta, sizeof(fruta), stdin);

    //imprimindo a fruta lida
    printf("Fruta Lida: ");
    puts(fruta);

}
