#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;

}Data;

struct aluno {
    int id;
    Data nascimento;
};


int main (void){
    struct aluno aluno1;
    aluno1.id = 15;
    aluno1.nascimento.ano = 1994;
    aluno1.nascimento.mes = 4;
    aluno1.nascimento.dia = 1;


    //imprimindo valores
    printf("======================");
    printf("\nNascido em: %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    printf(" \n======================");



    return 0;
}

