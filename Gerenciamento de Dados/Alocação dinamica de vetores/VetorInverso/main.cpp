/**
 Utilizando aloca��o din�mica e aritm�tica de ponteiros, declare um vetor de N inteiros
(onde N � um valor fornecido pelo usu�rio), leia um valor para cada posi��o e no final mostre
os elementos deste vetor em posi��o inversa ao que foram atribu�dos.
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
int main()
{
    int n,*v;
    cin>>n;
    v=leitura(n);
   escrita_in (v,n);







delete []v;

    return 0;
}
