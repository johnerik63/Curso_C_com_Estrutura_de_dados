#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *pont_arq;
    char texto_str[20];

    //abrindo arquivo_frase em modo "Somente Leitura"
    pont_arq = fopen("arquivo_palavra.txt", "r");

    //enquanto não for fim do looping executado e será impresso no texto
    while(fgets(texto_str, 20, pont_arq) != NULL)
        printf("%s", texto_str);

    //fechando o arquivo
    fclose(pont_arq);

    getchar();

    return 0;
}