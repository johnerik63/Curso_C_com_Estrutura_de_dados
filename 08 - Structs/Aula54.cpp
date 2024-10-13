#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<new>

using namespace std;

struct fruta{
    string cor;
    string nome;
};

int main(void){
    //criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;

    //modificando valores
    primeiraFruta -> cor = "Amarela";
    primeiraFruta -> nome = "Banana";


    cout << "Fruta: " << primeiraFruta -> nome << ", Cor: " << primeiraFruta -> cor;

    //Criando uma lista de Frutas
    fruta *ponteiroListaFrutas = new fruta[2];

    ponteiroListaFrutas[0].cor = "vermelho";
    ponteiroListaFrutas[0].nome = "Morango";
    ponteiroListaFrutas[1].cor = "verde";
    ponteiroListaFrutas[1].nome = "kiwi";

    //percorrendo e exibindo
    int i;
    printf("\n");
    for(i = 0; i < 2; i++){
        cout << "Fruta: " << ponteiroListaFrutas[i].nome << ", Cor: " << ponteiroListaFrutas[i].cor;
        cout << "\n";
    }
    
    return 0;
}