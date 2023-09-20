/**
8) Faça o teste de mesa do algoritmo recursivo abaixo (procure fazer a mão, e não utilizando o
computador), e responda a pergunta:
**/
#include <iostream>

using namespace std;
int xxx(int n, int m){
if (n==m||m==0){
    return 1;
}

return (xxx(n-1,m))+xxx(n-1,m-1);
}


int main()
{
   cout<<xxx(5,3);
return 0;}
