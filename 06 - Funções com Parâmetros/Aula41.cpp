#include<stdio.h>
#include<stdlib.h>

int retornaComMaisDez(int n){
    return n + 10;
}

void aumentaDez(int *num){
    *num = *num + 10;
}
int main(){
    //definindo variáveis
    int a = 5;

    //mostrando os valores
    printf("%d\n", a);

    //usando a função
    a = retornaComMaisDez(a);

    printf("%d\n", a);

    //função que aumenta dez diretamente

    aumentaDez( &a );
    printf("%d\n", a);




    return 0;
}