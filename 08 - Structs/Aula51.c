#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha_aluno // tipo de dado
{
    char nome[40];
    int numero;
    float nota;
};//definição da struct
int main(void){
    setlocale(LC_ALL, " ");

    struct ficha_aluno aluno;

    printf("\n----------- cadastro de aluno ---------------\n\n\n");
    printf("Nome do aluno ............: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);


    printf("\n\n----------- Lendo os dados da Struct ------------\n\n");
    printf("\nNome ......................: %s", aluno.nome);
    printf("\nNumero.....................: %d", aluno.numero);
    printf("\n");
    printf("\nNota.......................: %.1f", aluno.nota);
    printf("\n");


    return 0;
}