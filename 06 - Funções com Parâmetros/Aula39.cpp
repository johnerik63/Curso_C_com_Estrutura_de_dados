#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

void mostrasucessor(int numero){
    cout << "O sucessor de " << numero << " e: " << numero + 1;
}

int retornaAntecessor(int numero){
    return numero - 1;
}

int main(){
    //definindo variáveis
    int a;

    cout << "Digite um valor: ";
    cin >> a;


    mostrasucessor(a);
    cout << "\nO antecessor do numero digitado e: " << retornaAntecessor(a);


    //Parâmetro da função


    return 0;
}