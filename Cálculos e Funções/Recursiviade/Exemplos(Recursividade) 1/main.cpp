/**
1) Faça uma função recursiva para elevar um valor base a potência do valor expoente.

                                            num = 2     exp = 3


                                8 <--- return (el(num , exp-1) * num);
                                                |  2    2>1 ok    2
                                                ^4
                                                return (el(num , exp-1) * num);
                                                         |  2    1>1 er    2
                                                         ^2
                                                         return (num);
**/

#include <iostream>

using namespace std;
int elevado (int num, int exp){

if (exp <= 1){
    return num;
}

return ((elevado(num, exp-1) * num));
}

int main()
{
 int num, exp;
cout<<"digite um valor : ";

 cin>> num;

 cout<<"elevado : ";

  cin>> exp;

 cout<<"resultado : "<<elevado(num, exp);


 return 0;
}
