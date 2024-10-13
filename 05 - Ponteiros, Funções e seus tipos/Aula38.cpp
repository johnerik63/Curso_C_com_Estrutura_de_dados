#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<stdbool.h>

using namespace std;

void limpaTela(){
    system("CLS");
}

int main(){
    int a;
    cout << "Digite um valor para 'a': ";
    cin >> a;

    limpaTela();

    cout << "O valor de a e: " << a;

    return 0;
}