#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<stdbool.h>

using namespace std;

bool retornaBooleano(){
    return true;
}

int main(){
    bool variavelBooleana;

    variavelBooleana = retornaBooleano();

    cout << variavelBooleana;

     //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        cout << "\nE verdadeiro";
    }//Senão, executa o segundo bloco
    else{
        cout << "\nE Falso";
    }

    return 0;
}