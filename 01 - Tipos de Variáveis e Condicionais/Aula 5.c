#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");
    //Criando uma média com 3 notas para exercitar
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a segunda nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;
    printf("A media entre %f, %f e %f é: %f", n1, n2, n3, media);

}
