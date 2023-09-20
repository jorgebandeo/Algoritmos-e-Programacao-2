/**
- Utilizando alocação dinâmica e aritmética de ponteiros, leia dois vetores A e B com N e M
elementos respectivamente (onde N e M são valores fornecido pelo usuário). Construa um
terceiro vetor C, com todos os elemento de A, seguidos de todos os elementos de B.
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


for(int i=0; i<n ; i++){
     cout<< x[i]<<"\n";
    }

}

int main()
{
    int n,*A,*B,*C;
    cin>>n;
A=leitura(n);
B=leitura(n);
C=new int [2*n];
for(int i=0; i<n; i++){
C[i]=A[i];
C[i+n]=B[i];
}
escrita_in(C,2*n);
}

