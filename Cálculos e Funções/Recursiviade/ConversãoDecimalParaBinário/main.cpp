/**
7) Um problema t�pico em ci�ncia da computa��o consiste em converter um n�mero da sua forma
decimal para a forma bin�ria. Por exemplo, o n�mero 12 tem a sua representa��o bin�ria igual a
1100. A forma mais simples de fazer isso � dividir o n�mero sucessivamente por 2, onde o resto
da divis�o vai ser o d�gito i do n�mero bin�rio (da direita para a esquerda).
Por exemplo:
12 / 2 = 6, resto 0 (1� d�gito da direita para esquerda)
6 / 2 = 3, resto 0 (2� d�gito da direita para esquerda)
3 / 2 = 1 resto 1 (3� d�gito da direita para esquerda)
1 / 2 = 0 resto 1 (4� d�gito da direita para esquerda).
Resultado: 12 = 1100.
Fa�a uma fun��o recursiva que dado um n�mero decimal imprima a sua representa��o bin�ria
corretamente
**/
#include <iostream>

using namespace std;
int elevado (int num, int exp){

if (exp <= 1){
    return num;
}

return ((elevado(num, exp-1) * num));
}

int bin(int x,int c){

if(x/2==0){
    return (x%2)*elevado(10,c);
}

    return bin((x/2),c+1)+(x%2)*elevado(10,c);


}

int main()
{ int n=12,v[100],c;
  cout<<bin(n,0);


}
