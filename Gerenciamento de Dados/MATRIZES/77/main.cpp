#include <iostream>

using namespace std;

int main()
{
    int L1,C1,L2,C2,s=0;
    cout<<"DIGITE O NUMERO DE LINHAS E COLINA DA MATRIZ M\n";
    cin>>L1;
    system("cls");
    cout<<"DIGITE O NUMERO DE LINHAS E COLINA DA MATRIZ M\n";
    cout<<L1<<" , ";
    cin>>C1;
    system("cls");
    cout<<"DIGITE O NUMERO DE LINHAS E COLINA DA MATRIZ N\n";
    cin>>L2;
    system("cls");
    cout<<"DIGITE O NUMERO DE LINHAS E COLINA DA MATRIZ N\n";
    cout<<L2<<" , ";
    cin>>C2;
    system("cls");
    if(L2==C1){

    int **M=new int *[L1], **N=new int *[L2], **R=new int *[L1];

    for (int i=0; i<L1; i++){
M[i] = new int[C1];
R[i] = new int[C2];
}
for (int i=0; i<L2; i++){
N[i] = new int[C2];

}

for(int l=0; l<L1; l++){
   for(int c=0; c<C1; c++){

    *(*(M+l)+c)=2;

   }
}

for(int l=0; l<L2; l++){
   for(int c=0; c<C2; c++){

*(*(N+l)+c)=3;

   }
}

for(int l1=0; l1<L1; l1++){
   for(int c2=0; c2<C2; c2++){
    for(int l2=0; l2<L2; l2++){

    s+= *(*(M+l1)+l2)**(*(N+l2)+c2);


        }
*(*(R+l1)+c2)=s;
s=0;
    }

}
for(int l=0; l<L1; l++){
   for(int c=0; c<C1; c++){
    cout<<*(*(M+l)+c)<<"/";
   }
   cout<<"\n";
}
cout<<"\n";
cout<<"\n";
for(int l=0; l<L2; l++){
   for(int c=0; c<C2; c++){
    cout<<*(*(N+l)+c)<<"/";
   }
   cout<<"\n";
}
cout<<"\n";
cout<<"\n";
for(int l=0; l<L1; l++){
   for(int c=0; c<C2; c++){
    cout<<*(*(R+l)+c)<<"/";
   }
   cout<<"\n";
}

for (int i=0; i<L1; i++){
delete R[i];
delete M[i];
}
for (int i=0; i<L2; i++){
delete N[i];
}
delete M,N,R;
    }else{cout<<"erro";}
    return 0;
}
