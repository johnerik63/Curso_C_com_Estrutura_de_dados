#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

//Funções sem retorno (void)

//função que desenha a borda
void desenhaBorda(){
    printf("|-------------|\n");
}

int retornaDez();
float retornaFloat();

int main(){
    //chamando a função
    desenhaBorda();
    printf("ola\n");
    desenhaBorda();
    //determinando uma variável
    int a;
    //passando o retorno de uma função para uma variável
    a = retornaDez();
    //imprimindo o valor de a
    printf("%d", a);

    float b;
    b = retornaFloat();
    cout <<  "\nA funcao retorna: " << b;    
    return 0;
}

//funções inteiras
int retornaDez(){
    return 10;
}

float retornaFloat(){
    float num = 5.5;
    return 3 * num + 5;
}
    
