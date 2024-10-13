#include <stdio.h>
#include <stdlib.h>

int main (void){
    //criando a variável ponteiro para arquivo
    FILE *pont_arq;
    //abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "a");
    //fechando arquivo
    fclose(pont_arq);
    //mensagem para o usuário
    printf("O arquivo foi criado com suceso!\n");

    system("pause");



    return 0;
}