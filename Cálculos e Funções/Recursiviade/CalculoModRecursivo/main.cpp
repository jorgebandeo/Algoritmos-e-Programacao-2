/**
5) Pode-se calcular o resto da divis�o, MOD, de x por y, dois n�meros inteiros, usando-se a
seguinte defini��o:




Ent�o, pede-se que seja criada uma fun��o recursiva para descrever tal defini��o. A fun��o
deve retornar -1 caso n�o seja poss�vel realizar o c�lculo. Al�m disso, crie um algoritmo que
leia os dois valores inteiros e utilize a -- fun��o criada para calcular o quociente de x por y --, e
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
