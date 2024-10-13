#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>
#include<string>

using namespace std;
int main(void){
    ofstream arquivo;

    arquivo.open("texto.txt", std::ios_base::app);

    arquivo << "frase";

    arquivo.close();

    return 0;
}