#include <iostream>

using namespace std;

void print (int **X, int MAX){

for (int l=0; l<MAX; l++){
    for (int c=0; c<MAX; c++){
        cout<<"["<<*(*(X+l)+c)<<"]";
    }
    cout<<"\n";
}

}
int main()
{
    int **A,**B, **C,TAM;
    cout<<"ESCREVA O TAMANHO DE UMA MATRIZ QUADRADA : ";
    cin>> TAM;


    A=new int *[TAM];

    for (int i=0; i<TAM; i++){
    A[i]=new int [TAM];
    }


    char digit;
    do{
            system("cls");
    cout<<"QUAL MATRIZ VOCÈ ESCOLE";
    cout<<"\nA\n[0][2]\n[1][3]";
    cout<<"\nB\n[0][1]\n[1][0]";
    cout<<"\nC\n[0][1]\n[0][0]\n:";
    cin>>digit;
    }while(digit==('a' && 'b' && 'c' && 'A' && 'B' && 'C'));


    if(digit=='A'||digit=='a'){

int coni=1,conp=0;
    for (int l=0; l<TAM; l++){
    for (int c=0; c<TAM; c++){
            if(l%2==0){
        *(*(A+l)+c)=conp;
        conp+=2;
            }else{
        *(*(A+l)+c)=coni;
        coni+=2;
            }




    }

    }
    }else if(digit=='B' || digit=='b'){

for (int l=0; l<TAM; l++){
for (int c=0; c<TAM; c++){
        if((l+c)%2==0){
             *(*(A+l)+c)=1;
               }else{
               *(*(A+l)+c)=0;
               }
    }}
    }else if(digit=='C' || digit=='c'){
    for (int l=0; l<TAM; l++){
    for (int c=0; c<TAM; c++){
       if(l>=c){
             *(*(A+l)+c)=0;
               }else{
               *(*(A+l)+c)=1;
               }
    }}
    }


    print(A,TAM);

///--------------------------------------------------------------------------------
    for (int i=0; i<TAM; i++){
    delete A[i];
    }
    delete A;

   return 0;
}

