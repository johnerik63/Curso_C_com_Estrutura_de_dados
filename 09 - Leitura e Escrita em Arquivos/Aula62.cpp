#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

int main(void){
    //Criando um objeto para o arquivo
    ofstream seuArquivo;

    seuArquivo.open("arquivo.txt");

    seuArquivo << "";

    seuArquivo.close();


    return 0;
}
