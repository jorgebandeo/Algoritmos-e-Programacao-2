/**
Utilizando alocação dinâmica e aritmética de ponteiros, calcule a média das notas de N
alunos (onde N é um valor fornecido pelo usuário) de uma disciplina e determine o número de
alunos que tiveram nota superior a média calculada.
**/

#include <iostream>

using namespace std;

int main()
{
    int n,contador;
    float *vet;
    cout<<"numro de alunos : ";
    cin>>n;
    vet = new float[n];

    for(int i=0; i<n ; i++){
     cin>> vet[i];
    }

    for(int i=0; i<n ; i++){
     if(vet[i]>6){
        contador++;
     }
    }
    cout<<contador;

delete []vet;
return 0;
}
