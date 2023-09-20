/**
- Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros
(onde N é um valor fornecido pelo usuário), leia um valor para cada posição e no final mostre o
calculo do fatorial do maior e do menor.
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
void escrita_in(int *x,int n){


for(int i=n-1; i>=0 ; i--){
     cout<< x[i]<<"\n";
    }

}
void menor_mair_fatorial (int *x,int n){
int menor=x[0],maior=x[0];


for(int i=1; i<n;i++){
    if (menor>x[i]){
        menor=x[i];
    }else if (maior<x[i]){
        maior=x[i];
    }
}

for(int i=maior-1; i>0; i--){
 maior*=i;
}
for(int i=menor-1; i>0; i--){
 menor*=i;
}
cout<<maior<<"   ,   "<<menor;
}

int main()
{
   int n,*v;
cin>>n;

v = leitura(n);
menor_mair_fatorial(v,n);


delete []v;
}
