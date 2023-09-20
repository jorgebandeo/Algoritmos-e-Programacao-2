#include <iostream>

using namespace std;
template <typename X, int tamanho>
 struct Vetor {
 X vet[tamanho];
 };

 template <typename X, int tamanho>
 istream & operator >> (istream & is, Vetor<X,tamanho> &a) {

for (int i=0; i<tamanho;i++){
is >> a.vet[i];}

return is;
}
 template <typename X, int tamanho>
 ostream & operator << (ostream & os, const Vetor<X,tamanho> &a) {

     for (int i=0; i<tamanho;i++){
os << a.vet[i]<< " ";}

os << endl;

return os;
}


 template <typename X, int tamanho>
 Vetor<X,2*tamanho>  operator+ (  Vetor<X,tamanho> &a, Vetor<X,tamanho> &b) {
   Vetor<X, 2*tamanho> res;
   int i;
     for ( i=0; i<tamanho;i++){
res.vet[i] = a.vet[i];}
for ( i=0; i<tamanho;i++){
res.vet[i+(tamanho)] = b.vet[i];}

cout<<" resultado : ";
for (i=0; i<2*tamanho;i++){
cout<<" ( "<<res.vet[i]<<" ) ";
}


return (res);
}

 template <typename X, int tamanho>
 Vetor<X,tamanho>  operator|= (  Vetor<X,tamanho> &a, Vetor<X,tamanho> &b) {
   Vetor<X, tamanho> res;
   int i;
     for ( i=0; i<tamanho;i++){
            if (a.vet[i] == b.vet[i]){
res.vet[i] = a.vet[i];
}}
cout<<" resultado : ";
for (i=0; i<tamanho;i++){
cout<<" ( "<<res.vet[i]<<" ) ";
}

return (res);
}

int main()
{
    Vetor <int, 2> A,B,res2;
    Vetor <int, 4> res4;
cout<<"vetor 1 ; ";
    cin>>A;
    cout<<"vetor 1 ; ";
    cin>>B;

    res4 = A + B;

    res2 = A |= B;

}
