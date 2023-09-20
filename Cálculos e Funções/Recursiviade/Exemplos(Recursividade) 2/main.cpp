/**
2) Faça uma função recursiva que calcule o M.D.C. (máximo divisor comum) entre dois valores
fornecidos pelo usuário. Por exemplo: m.d.c. de 12 e 20 é 4.
                                _______________________
                               | 12 , 20 | 20 – 12 = 8 |
                               |---------|-------------|
                               | 12 , 8  | 12 – 8 = 4  |
                               |---------|-------------|
                               |  4 , 8  | 8 – 4 = 4   |
                               |---------|-------------|
                               |  4 , 4  |   M.D.C.    |
                               |_________|_____________|
                               if(num1 == num2)
                               return num1;
                               if(num1 > num2)
                               mai = num1;
                               men = num2;
                               else
                               mai = num2;
                               men = num1;

                        4 <--- return (fun( men , mai-men ));
                                        |   12     20-12 = 8
                                        ^4
                                        return (fun( men , mai-men ));
                                                 |    8     12-8 = 4
                                                 ^4
                                                 return (fun( men , mai-men ));
                                                              4      8-4 = 4
                                                                mai==men

**/
#include <iostream>

using namespace std;
int mdc (int num1, int num2){
int mai,men;
    if(num1 == num2){
        return num1;
    }
    if(num1 > num2){
        mai = num1;
        men = num2;
    }else{
        mai = num2;
        men = num1;
    }
return (mdc( men , mai-men ));
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
