#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritimo que identifique se o valor lido � primo ou n�o.
    //int a;
    //while(a != 0){
    //    printf("\nDigite um n�mero: ");
    //    scanf("%d", &a);
    //    if(((a == 2) || (a == 3))|| ((a % 2 != 0) && (a % 3 != 0) && (a != 1))){
    //        printf("\nO n�mero digitado � primo!");
    //    }else{
     //        printf("\nO n�mero n�o � primo!");
    //    }
    //}

    int k = 0;
    while(k == 0){
        int i, valor, aux = 0;
        printf("\nDigite um valor: ");
        scanf("%d", &valor);
        for(i = 1; i <= valor; i++){
            if(valor % i == 0){
                aux++;
            }
        }
        if (aux == 2){
            printf("\nO n�mero � primo!");
        }else{
            printf("\nO n�mero n�o � primo!");
            }
        }

}
