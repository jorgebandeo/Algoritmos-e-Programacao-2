/**
3) Faça uma função recursiva que calcule o M.D.C. pelo algoritmo de Euclides. Por exemplo,
divide-se a por b e obtêm-se o quociente q e o resto r. Se r for zero, b é o m.d.c; se não for,
divide-se b por r e assim sucessivamente até encontrar um resto zero. O último divisor é o M.D.C.
                                _______________________
                               | 12 , 20 | 20 % 12 = 8 |
                               |---------|-------------|
                               | 20 , 8  | 20 % 8 = 4  |
                               |---------|-------------|
                               | 20 , 8  | 20 % 4 = 0  |
                               |---------|-------------|
                               |    4    |   M.D.C.    |
                               |_________|_____________|





                               if(num1 > num2)
                               mai = num1;
                               men = num2;
                               else
                               mai = num2;
                               men = num1;

                               if(mai%men == 0)
                               return men;

                        4 <--- return (fun( mai , mai%men ));
                                        |   20     20%12 = 8
                                        ^4
                                        return (fun( mai , mai%men ));
                                                      20     20%8 = 4

                                                        mai%men==0
                                                        return men







**/

#include <iostream>

using namespace std;



int mdc (int num1, int num2){
int mai,men;
    if(num1 > num2){
        mai = num1;
        men = num2;
    }else{
        mai = num2;
        men = num1;
    }

    if(mai%men == 0){
        return men;
    }

return (mdc( mai , mai%men ));
}

int main()
{
int num1, num2;
cout<<"um primeiro elemento para mdc : ";

 cin>> num1;

cout<<"um segundo elemento para mdc : ";

  cin>> num2;

 cout<<"resultado : "<<mdc(num1, num2);

 return 0;
}
