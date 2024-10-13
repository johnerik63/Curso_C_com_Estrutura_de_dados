#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main(void){
    //qual arquivo será lido?
    ifstream input("arquivo_palavra.txt");
    //String que receberá o texto lido
    string textoLido;
    //Passa o texto para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }
    //mostrar o conteúdo
    cout << textoLido;


    return 0;
}