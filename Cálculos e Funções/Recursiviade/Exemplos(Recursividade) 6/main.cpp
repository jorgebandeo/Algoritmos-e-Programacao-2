/**
6) Faça uma função recursiva que realize a multiplicação entre dois valores int, sem utilizar o
operador *.
                    mult (x,y);
                    5*3

                    if(y<=1)
                    return x;

                    return (mult( x , y-1 ) + x );
                              |
                              ^
                              return (mult(x,y-1)+x);
**/
#include <iostream>

using namespace std;
int mult (int x, int y){
if (y<=1){
    return x;
}
return (mult(x,y-1)+x);

}
int main()
{
    cout<<mult(3,9);

return 0;}
