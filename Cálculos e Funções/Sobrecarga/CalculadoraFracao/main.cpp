#include <iostream>

using namespace std;
struct fracao {
 int numerador, denominador;
};

istream & operator >> (istream & is, fracao &a) {
    cout<<"n�merador : ";
is >> a.numerador;
    cout<<"denominador : ";
is >> a.denominador;
return is;
}

ostream & operator << (ostream & os, const fracao &a) {
os << a.numerador << " ";
os << a.denominador << " ";
os << endl;

return os;
}

int operator+ (fracao &a, fracao &b ){
int res;
res = a.numerador+a.denominador;
return (res);
}

int operator- (fracao &a, fracao &b){
int res;
res = a.numerador-a.denominador;
return (res);
}

int operator* (fracao &a, fracao &b){
int res;
res = a.numerador*a.denominador;
return (res);
}

float operator/ (fracao &a, fracao &b){
float res;
res = a.numerador/a.denominador;
return (res);
}



int main()
{  int res;
   fracao A;


   cout << "entrada dos valors"<<endl;
   cin>>A;


   cout << "escrita dos valors"<<endl;
   cout<< A;

   cout << "escrita dos valors"<<endl;
   cout<< A;
   cout << "soma "<<endl;
   res = A + A ;
   cout<<"soma rsultado ; "<<res<<endl;


   cout << "subtra��o  "<<endl;
   res = A - A ;
   cout<<"subtra��o rsultado ; "<<res<<endl;

   cout << "multiplica��o "<<endl;
   res = A * A ;
   cout<<"multiplica��o rsultado ; "<<res<<endl;

   cout << "divi��o "<<endl;
   res = A / A ;
   cout<<"divi��o rsultado ; "<<res<<endl;

return 0;
}
