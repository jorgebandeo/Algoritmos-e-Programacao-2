/**
Utilizando aloca��o din�mica e aritm�tica de ponteiros, calcule a m�dia das notas de N
alunos (onde N � um valor fornecido pelo usu�rio) de uma disciplina e determine o n�mero de
alunos que tiveram nota superior a m�dia calculada.
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
