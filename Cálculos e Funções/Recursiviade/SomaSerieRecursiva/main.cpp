/**
1) Escreva uma função recursiva, int SomaSerie (int i, int j, int k), que imprime na tela a soma
de valores do intervalo [i,j], com incremento k.
**/
#include <iostream>

using namespace std;
int SomaSerie (int i, int j, int k){
if(i>j){
    return 0;
}
return SomaSerie(i+k,j,k)+i;
}
int main()
{
    cout<<SomaSerie(2,8,2);
    return 0;

}
