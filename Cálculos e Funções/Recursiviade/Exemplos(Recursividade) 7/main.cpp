/**
7) Faça uma função recursiva que receba os valores de X e N e realize o cálculo da seguinte
progressão geométrica:
**/
#include <iostream>

using namespace std;
int elevado (int num, int exp){

if (exp <= 0){
    return 1;
}

return ((elevado(num, exp-1) * num));
}

int geo (int X, int N){
if (N <= 0){
    return 1;
}
return (geo( X , N-1) + elevado(X , N));
}

int main()
{
int num, exp;
cout<<"digite um valor X: ";

 cin>> num;

cout<<"digite um valor N: ";

  cin>> exp;

 cout<<"resultado : "<<geo(num, exp);


 return 0;
}
