#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
void print (int **X, int MAX){

for (int l=0; l<MAX; l++){
    for (int c=0; c<MAX; c++){
        cout<<"["<<*(*(X+l)+c)<<"]";
    }
    cout<<"\n";
}

}
void ci (int **X, int MAX){
    srand (time(NULL));
for (int l=0; l<MAX; l++){
for (int c=0; c<MAX; c++){
    *(*(X+l)+c)=rand()+1;
    cout<<"  ["<<l+1<<"]"<<"["<<c+1<<"] : "<<*(*(X+l)+c);

}
cout<<"\n";
}
}
int main()
{int **A,TAM;
    cout<<"ESCREVA O TAMANHO DE UMA MATRIZ QUADRADA : ";
    cin>> TAM;

     A=new int *[TAM];

    for (int i=0; i<TAM; i++){
    A[i]=new int [TAM];
    }
    ci(A,TAM);
   cout<<"\n";



for (int l=0; l<TAM; l++){
for (int c=0; c<TAM; c++){
if (l+c>=TAM){


for ( int i=1; i<=*(*(A+l)+c); i++   ){
   if(*(*(A+l)+c)%i==0) {
   if(*(*(A+l)+c)==i){

  *(*(A+l)+c)*=2;
  i=11+*(*(A+l)+c);

   }else if(i!=1){

   i=11+*(*(A+l)+c);
   }
}


}

}

}
}

print(A,TAM);

 for (int i=0; i<TAM; i++){
delete A[i];
 }
delete A;
return 0;
}

