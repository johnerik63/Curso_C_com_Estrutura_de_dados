#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    //Switch Case:
    //Apresenta o menu
    printf("Menu               \n");
    printf("1 - Espressp       \n");
    printf("2 - Cappuccino     \n");
    printf("3 - Macchiatto     \n");
    printf("Escolha uma opção: ");
    int opcao;
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Espresso escolhido.");
            break;
        case 2:
            printf("Cappuccino escolhido.");
            break;
        case 3:
            printf("Macchiato escolhido.");
            break;
        default:
            printf("Opção inválida.");
            break;
    }

}
