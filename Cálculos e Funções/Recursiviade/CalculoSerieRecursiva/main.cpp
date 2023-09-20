/**
4) Faça uma função recursiva, em linguagem C, que calcule o valor da série S descrita a seguir
para um valor n>0 a ser fornecido como parâmetro para a mesma.
                   5          1+n^2
             s=2+ --- + ... + -----
                   2            n
**/
#include <iostream>

using namespace std;

float serie(float n){

if(n==1){
    return ((1+n*n)/n);

}

return serie(n-1)+((1+(n*n))/n);
}
int main()
{
    int n;
    do{
       system("cls");
      cout<<"digite um número para o cálculo : ";
      cin>>n;
    }while(n<=0);

    cout<<"\n"<<serie(n);
    return 0;
}
