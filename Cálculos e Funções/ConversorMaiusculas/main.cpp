#include <iostream>
#include <ctype.h>
#include <string>
#include <fstream>
using namespace std;

int main()
{   char letra;
    ifstream leitura;
    ofstream escrita;
    leitura.open("origem.txt" );
    escrita.open("destino.txt");

    while(leitura.get( letra)){
    letra= toupper(letra);
    escrita<<letra;
    }

    escrita.close();
    leitura.close();

    return 0;
}
