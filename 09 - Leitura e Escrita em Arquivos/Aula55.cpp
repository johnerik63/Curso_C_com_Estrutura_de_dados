#include <stdio.h>
#include <stdlib.h>
#include <fstream>


using namespace std;

int main(void){

    //cria o objeto de arquivo
    ofstream arquivoDeSaida;
    ofstream arquivo2;

    //abre o arquivo ou cria caso não exista
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);
    arquivo2.open("texto.py", std::ios_base::app);


    //escreve algo
    arquivoDeSaida << "alguma coisa";
    arquivo2 << "nome = input('Digite seu nome: ') \nprint(nome)";


    //fechando o arquivo
    arquivo2.close();
    arquivoDeSaida.close();




    return 0;
}
