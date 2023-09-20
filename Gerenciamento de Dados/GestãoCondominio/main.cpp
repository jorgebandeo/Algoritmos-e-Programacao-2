#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define nu 40
struct q5{
    char ususario[40][20];
    int apartamento[40];
    float aria[nu];
    int n_moradores[nu];
    float valor_mensal[nu];
};

 void leitura_nome (q5 &X,int i ){
char x[]={0};
cout<<"nome do responsavel do apartamento: ";
cin>>X.ususario[i];
 }

  void leitura_apartamento (q5 &X,int i){

      int e=1,x;
do{
cout<<"\nnúmero do apartamento: ";
  cin>>x;
  for(int c=0;c<40;c++){
if (x==X.apartamento[c]){
    e=e*0;
}else{}

}
  }while(e!=1);
  X.apartamento[i]=x;
  }
   void leitura_aria (q5 &X,int i){
       int e=1;
      cout<<"\nescreva a aria total do apartameno";
      do{
       cin>>X.aria[i];
      if(X.aria[i]<5){
      e*=0;cout<<"\nnúmero da ária menor que 5, tente novamente ";
      }

      }while(e!=1);

 }

  void leitura_moradores (q5 &X,int i){
     int e=1;
     do{
     cout<<"\nnúmero de moradores : ";
     cin>>X.n_moradores[i];
     if(X.n_moradores[i]<0){
        e*=0; cout<<"\nnúmero de moradores menor que zero, tente novaente";
     }
     }while(e!=1);
 }
void escrita_dados (q5 X,int Y[], int n){

for (int i=0; i<n;i++){
        cout<<"\nnome do proprietario : ";
    for(int c=0;c<nu;c++){
cout<<X.ususario[Y[i]][c];
    }
 cout<<"\nnúmero do apartamento : "<<Y[i];
 cout<<"\nária do apartamento : "<<X.aria[Y[i]];
 cout<<"\nnúmero de moradores : "<<X.n_moradores[Y[i]];

    }


}

void escrita_do_maior(q5 X){
int x[nu],p[nu],e=1;
int i;
x[0]=X.n_moradores[0];
for(i=0;i<nu;i++){
if(x[0]<X.n_moradores[i]){
   x[0]=X.n_moradores[i];
   p[0]=i;
}
}
for(i=0;i<nu;i++){
    if(x[0]==X.n_moradores[i]){
       p[e]=i;
       e++;

    }
}
escrita_dados(X,p,e);


}


int main()
{

int i,x,cont=0;
    q5 A;
do{
cout<<"----menu----\n\ndigite o numero corresondente a ação que deseja fazer\n 1 - (incerir um novo condominio)\n 2 - (ária total do condominio)";
cout<<"\n 3 - (apartamento com maior número de pessoas registradas e dados do apartamento)\n 4 - (finalizar sesão)\n : ";
cin>>x;

switch (x){
case 1:
for( i=0;i<nu;i++){
        leitura_nome(A,i);
        leitura_apartamento(A,i);
        leitura_aria(A,i);
        leitura_moradores(A,i);
    system("PAUSE");
    system("cls");
    }
    cont++;
    break;
case 2:
    if(cont==0){
        cout<<"\nnenhum condominio registrado\n";
    }else{
    int s;
    for(i=0;i<nu;i++){
    s+=A.aria[i];
    }
    cout<<"\nA ária total d condomino é de "<<s<<" metros quadrados";
     system("PAUSE");
    system("cls");
    }
    break;
case 3:
    if(cont==0){
        cout<<"\nnenhum condominio registrado\n";
    }else{
    escrita_do_maior(A);
     system("PAUSE");
    system("cls");
    }
    break;
case 4:
    break;
default:
    cout<<" \nrepita por favor, não entendi\n ";

}


}while(x!=4);
}
