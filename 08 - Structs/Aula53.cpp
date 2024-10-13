#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int matricula;
    float nota;
}tAluno;

int main(void){

    tAluno a1;

    //ptrAluno é um ponteiro do tipo tAluno que recebe o endereço de a1

    tAluno *ptrAluno = &a1;

    a1.matricula = 555;
    a1.nota = 8.0;

    printf("matricula: %d nota:%.1f", a1.matricula, a1.nota);

    (*ptrAluno).nota = 8.5;

    printf("\nmatricula: %d nota:%.1f", (*ptrAluno).matricula, (*ptrAluno).nota);

    ptrAluno -> nota = 9.0; //outra notação
    printf("\nmatricula: %d nota:%.1f", ptrAluno -> matricula, ptrAluno->nota);


    return 0;
}