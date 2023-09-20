/**
Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros
(onde N é um valor fornecido pelo usuário). Crie uma função para ler um valor para cada
posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro
elemento do vetor.
**/
#include <iostream>

using namespace std;
int* leitura( int n){
int *x;
x=new int [n];
for(int i=0; i<n ; i++){
     cin>> x[i];
    }
    return x;
}
void menor_mair_igual (int *x,int n){

cout<<"primeiro valor"<<x[0]<<"\nvalores menores que o primeiro\n";
for(int i=1; i<n;i++){
    if (x[0]>x[i]){
        cout<<x[i]<<" , ";
    }
}

cout<<"\nvalores maiores que o primeiro\n";
for(int i=1; i<n;i++){
    if (x[0]<x[i]){
        cout<<x[i]<<" , ";
    }
}

cout<<"\nvalores iguais que o primeiro\n";
for(int i=1; i<n;i++){
    if (x[0]==x[i]){
        cout<<x[i]<<" , ";
    }
}
}

int main()
{
   int n,*v;
cin>>n;

v = leitura(n);
menor_mair_igual(v,n);


delete []v;
}
