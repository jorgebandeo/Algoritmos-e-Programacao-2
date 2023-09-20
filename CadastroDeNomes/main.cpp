#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char nome[100];
    ofstream ar;
    ar.open("sadsd.txt",fstream::binary  );

    for(int c=0; c<10; c++){
    cout<<"digite um nome : ";
    cin>>nome;
    ar<<nome<<endl;
    }
    ar.close();
    ifstream s;
    s.open("sadsd.txt",fstream::binary );

    while (s.getline(nome,100)){
        cout<<nome<<"\n";
    }

    return 0;
}
