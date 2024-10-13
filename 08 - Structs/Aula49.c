#include<stdio.h>
#include<stdlib.h>

//semelhante a objetos.
struct palavra{
    int ordem;
    char letra;
    char texto[255];

};

int main(void){
    //Criando uma palavra
    struct palavra primeiraPalavra;

    //modificando os campos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'c';

    //mostrando valores do struct
    printf("Ordem: %d", primeiraPalavra.ordem);
    printf("\nPrimeira Letra: %c", primeiraPalavra.letra);
    strcpy(primeiraPalavra.texto, "palavra");
    printf("\nPalavra: %s", primeiraPalavra.texto);

    //fazendo uma lista de structs
    struct palavra listaDePalavras[3];

    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'e';
    listaDePalavras[2].letra = 'f';
    strcpy(listaDePalavras[0].texto,"Dahora");
    strcpy(listaDePalavras[1].texto,"Legal");
    strcpy(listaDePalavras[2].texto,"Bacana");

    //percorrendo o vetor
    int cont;
    for(cont=0 ; cont < 3; cont++ ){
        printf("\nOrdem: %d", listaDePalavras[cont].ordem);
        printf("\nPrimeira Letra: %c", listaDePalavras[cont].letra);
        printf("\nPalavra: %s", listaDePalavras[cont].texto);

    }
    
    


    return 0;
}