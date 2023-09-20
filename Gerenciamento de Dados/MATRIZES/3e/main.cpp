#include <iostream>
#include <time.h>
using namespace std;
int** soma (int **A,int **B, int MAX){
int **R;
R=new int *[MAX];
for (int i=0; i<MAX; i++){
    R[i]=new int [MAX];
    }
for (int l=0; l<MAX; l++){
for (int c=0; c<MAX; c++){
*(*(R+l)+c)=*(*(A+l)+c)+*(*(B+l)+c);
}
}
return R;
}
void ci (int **X, int MAX){
for (int l=0; l<MAX; l++){
for (int c=0; c<MAX; c++){
    cout<<"["<<l+1<<"]"<<"["<<c+1<<"]";
    cin>>*(*(X+l)+c);
}
}
}
int main()
{
    int **A,**B, **C,TAM;
    cout<<"ESCREVA O TAMANHO DE UMA MATRIZ QUADRADA : ";
    cin>> TAM;

    srand (time(NULL));
    A=new int *[TAM];
    B=new int *[TAM];
    C=new int *[TAM];
    for (int i=0; i<TAM; i++){
    A[i]=new int [TAM];
    B[i]=new int [TAM];
    C[i]=new int [TAM];
    }
    cout<<"dígite a matriz A :"<<endl;
    ci(A,TAM);
    system("cls");
    cout<<"dígite a matriz B :"<<endl;
    ci(B,TAM);
    system("cls");
C=soma(A,B,TAM);
for (int l=0; l<TAM; l++){
    for (int c=0; c<TAM; c++){
        cout<<"["<<*(*(A+l)+c)<<"]";
    }
    cout<<"\n";
}
cout<<"+\n";
for (int l=0; l<TAM; l++){
    for (int c=0; c<TAM; c++){
        cout<<"["<<*(*(B+l)+c)<<"]";
    }
    cout<<"\n";
}

cout<<"=\n";
for (int l=0; l<TAM; l++){
    for (int c=0; c<TAM; c++){
        cout<<"["<<*(*(C+l)+c)<<"]";
    }
    cout<<"\n";
}
 for (int i=0; i<TAM; i++){
delete A[i];
delete B[i];
delete C[i];
 }
delete A;
delete B;
delete C;
return 0;
}
