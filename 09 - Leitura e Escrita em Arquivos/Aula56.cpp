#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(void){

    //Cursor que irá percorrer cada letra do arquivo que será lido
    int c;

    //Arquivo a ser lido
    FILE *file;

    //Abre o arquivo no diretório escolhido
    file = fopen("arquivo.txt", "r");
    if (file == NULL){
        printf("Cu");
    }
    if(file != NULL){
        //enquanto encontra letras
        while((c = getc(file)) != EOF){
            printf("%c", c);
        }
        //fecha o arquivo
        fclose(file);

    }
    return 0;
}
