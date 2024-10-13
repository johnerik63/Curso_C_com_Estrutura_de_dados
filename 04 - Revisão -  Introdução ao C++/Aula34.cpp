#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string>

using namespace std;

int main(){

    //definindo variáveis
    int a;
    float b;
    char c;
    bool d;
    //dando valor para as variáveis
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;
    //escrevendo variáveis na tela
    printf("valor: %d", a);
    printf("\nvalor: %.2f", b);
    printf("\nvalor: %c", c);
    printf("\nvalor: %d", d);
    //imprimindo valores em c++
    cout << "\nvalor: " << a;
    //lendo valores em C
    printf("\nDigite um inteiro: ");
    scanf("%d", &a);
    printf("Digite um numero real: ");
    scanf("%f", &b);
    //lendo valores em c++
    cout << "Digite um valor: ";
    cin >> a;
    cout << "\nvalor digitado: " << a;



    return 0;    
}
