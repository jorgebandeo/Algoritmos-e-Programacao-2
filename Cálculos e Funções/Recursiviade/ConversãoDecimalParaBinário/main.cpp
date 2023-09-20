/**
7) Um problema típico em ciência da computação consiste em converter um número da sua forma
decimal para a forma binária. Por exemplo, o número 12 tem a sua representação binária igual a
1100. A forma mais simples de fazer isso é dividir o número sucessivamente por 2, onde o resto
da divisão vai ser o dígito i do número binário (da direita para a esquerda).
Por exemplo:
12 / 2 = 6, resto 0 (1º dígito da direita para esquerda)
6 / 2 = 3, resto 0 (2º dígito da direita para esquerda)
3 / 2 = 1 resto 1 (3º dígito da direita para esquerda)
1 / 2 = 0 resto 1 (4º dígito da direita para esquerda).
Resultado: 12 = 1100.
Faça uma função recursiva que dado um número decimal imprima a sua representação binária
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
