/**
4) Fa�a um programa que receba um valor n, e imprima a contagem regressiva a partir deste
valor. Por exemplo, se o usu�rio digitar 5, o programa ir� imprimir 5, 4, 3, 2, 1, 0.
**/
#include <iostream>

using namespace std;
void cont (int num ){
if(num>=0){
cout<<num<<endl;
cont(num-1);
}
}
int main()
{
    int num;
    cout<<"n�mero para para contagem : ";
    cin>>num;
    cont(num);
}
