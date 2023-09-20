/**
5) Pode-se calcular o resto da divisão, MOD, de x por y, dois números inteiros, usando-se a
seguinte definição:




Então, pede-se que seja criada uma função recursiva para descrever tal definição. A função
deve retornar -1 caso não seja possível realizar o cálculo. Além disso, crie um algoritmo que
leia os dois valores inteiros e utilize a -- função criada para calcular o quociente de x por y --, e
imprima o valor computado

**/
#include <iostream>

using namespace std;
int MOD(int x,int y){
    x=(x*x)/x;
    y=(y*y)/y;
    if (x==y){
        return 0;
    }else if(x<y){
        return x;
    }else if(x>y){
        return MOD(x-y,y);
    }else{
        return -1;
        }
}


int main()
{int x,y;
cout<<"digite o valor a ser dividido : "
cin>>x;
cout<<"por : ";
cin>>y;
    cout<<"\n"<<MOD(5,2);
    return 0;
}
