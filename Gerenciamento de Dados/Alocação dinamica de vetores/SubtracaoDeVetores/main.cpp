/**
- Utilizando aloca��o din�mica e aritm�tica de ponteiros, leia dois vetores A e B com N
elementos (onde N � um valor fornecido pelo usu�rio). Construa um terceiro vetor C, onde
cada elemento � a subtra��o do elemento correspondente de a A com B.
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
C=new int [n];
for(int i=0; i<n; i++){
C[i]=A[i]-B[i];

}
escrita_in(C,n);
}
