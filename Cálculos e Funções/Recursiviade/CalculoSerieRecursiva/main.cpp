/**
4) Fa�a uma fun��o recursiva, em linguagem C, que calcule o valor da s�rie S descrita a seguir
para um valor n>0 a ser fornecido como par�metro para a mesma.
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
      cout<<"digite um n�mero para o c�lculo : ";
      cin>>n;
    }while(n<=0);

    cout<<"\n"<<serie(n);
    return 0;
}
