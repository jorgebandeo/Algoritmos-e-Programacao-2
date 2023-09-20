#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#define usuarios 10
using namespace std;
int contagem=0;
struct d4{
int dat[usuarios+1][3];
char nome[usuarios][20];
};


int veri_data (d4 v,int l){



                    if (v.dat[l][0]/100==0){
                        if (v.dat[l][0]<1){return 0;}
                        else if(v.dat[l][1]/100!=0){return 0;}
                        else if (v.dat[l][1]>12){return 0;}
                        else if (v.dat[l][1]<1){return 0;}

                        if (v.dat[l][2]%4==0&&v.dat[l][2]%100!=0){///ano bixesto

                        if(v.dat[l][1]==2){
                            if(v.dat[l][0]>29){return 0;}
                            else{return 1;}

                            if(v.dat[l][1]%2==0){
                                    if(v.dat[l][0]>30){return 0;}
                                    else{return 1;}
                        }else if (v.dat[l][0]>31){return 0;}
                        else{return 1;}


                        }


                        }else{///ano normal

                        if(v.dat[l][1]%2==0){
                                    if(v.dat[l][0]>30){return 0;}
                                    else{return 1;}
                        }else if (v.dat[l][0]>31){return 0;}
                        else{return 1;}

                        }
                    }else{return 0;}




}
void lista (d4 v, int l ){


    for(int i=0;i<l;i++){


    cout<<i+1<<" °, usuário : ";
    for(int c=0;c<20;c++){
            cout<<v.nome[i][c];
    }
    cout<<" data de nacimento ( "<<v.dat[i][2]<<" / "<<v.dat[i][1]<<" / "<<v.dat[i][0]<<" )\n\n";

    }

}
void lista_data_cima(d4 v){
    for(int i=0; i<usuarios; i++){
 if (v.dat[usuarios][0]<v.dat[i][0]) {

        cout<<i+1<<" °, usuário : ";
    for(int c=0;c<20;c++){
            cout<<v.nome[i][c];
    }
    cout<<" data de nacimento ( "<<v.dat[i][2]<<" / "<<v.dat[i][1]<<" / "<<v.dat[i][0]<<" )\n\n";



 } else if(v.dat[usuarios][0]==v.dat[i][0]){
if(v.dat[usuarios][1]<v.dat[i][1]){
         cout<<i+1<<" °, usuário : ";
    for(int c=0;c<20;c++){
            cout<<v.nome[i][c];
    }
    cout<<" data de nacimento ( "<<v.dat[i][2]<<" / "<<v.dat[i][1]<<" / "<<v.dat[i][0]<<" )\n\n";

}else if(v.dat[usuarios][1]==v.dat[i][1]){
    if(v.dat[usuarios][2]<=v.dat[i][2]){
 cout<<i+1<<" °, usuário : ";
    for(int c=0;c<20;c++){
            cout<<v.nome[i][c];
    }
    cout<<" data de nacimento ( "<<v.dat[i][2]<<" / "<<v.dat[i][1]<<" / "<<v.dat[i][0]<<" )\n\n";

    }
    }
    }


}
}
void leitura_data ( d4 &v){
    srand(time(NULL));
    char x[3];
    char nomein[20]={0};
   int z,l=contagem;

   contagem++;
   lista(v,l);

   if(l<usuarios){
   cout<<"\nescreva seu nome : ";
   gets(nomein);
   for(int c=0; c<20;c++){
   v.nome[l][c]=nomein[c];
   }


   //do{

        cout<<"\n"<<contagem<<" º "<<"usuario : "<<nomein;

    cout<<"\n\n"<<"\ndigite o ano (maximo qautro digitos) : ";
    //cin>> v.dat[l][0];

     v.dat[l][0] = 1940 + (rand() % 74);
     do{
    cout<<"\n digite a mes (máximo dois dígitos) : ";
    //cin>> v.dat[l][1];
    v.dat[l][1] = 1 + (rand() % 12);
    }while(veri_data(v,l)!=0);
    do{
    cout<<"\n digite a dia (maximo dois digitos) : ";
    //cin>> v.dat[l][2];
    v.dat[l][2] = 1 + (rand() % 30);
    }while(veri_data(v,l)!=0);
    cout<<"\nvocé digítou o seguínte horário :( "<<v.dat[l][2]<<" / "<<v.dat[l][1]<<" / "<<v.dat[l][0]<<" )";
    /*do{
     cin>>x;
     ///talvez seja legal fazer uma função com isso, pode facilitar
    if(x[0]!='n'||x[1]!='ã'||x[2]!='o'){
    if (x[0]!='s'||x[1]!='i'||x[2]!='m') {z=1; cout<<"\nnão entedi, repita por fabor\n"; }else{z=0;}}else{z=0;system("cls"); cout<<"\ntente novamente \n\n";}
     }while (z!=0);
   }while(x[0]!='s'||x[1]!='i'||x[2]!='m');
*/
}else{cout<<"dígite uma data para pesquisa de usúarios com idade acima desta : ";
do{
    cout<<"\n\n"<<"\ndigite o ano (maximo qautro digitos) : ";
    cin>> v.dat[l][0];

     //v.dat[l][0] = 1940 + (rand() % 74);
     do{
    cout<<"\n digite a mes (máximo dois dígitos) : ";
    cin>> v.dat[l][1];
    //v.dat[l][1] = 1 + (rand() % 12);
    }while(veri_data(v,l)!=0);
    do{
    cout<<"\n digite a dia (maximo dois digitos) : ";
    cin>> v.dat[l][2];
    //v.dat[l][2] = 1 + (rand() % 30);
    }while(veri_data(v,l)!=0);
    cout<<"\nvocé digítou o seguínte horário :( "<<v.dat[l][2]<<" / "<<v.dat[l][1]<<" / "<<v.dat[l][0]<<" )";
    do{
     cin>>x;
     ///talvez seja legal fazer uma função com isso, pode facilitar
    if(x[0]!='n'||x[1]!='ã'||x[2]!='o'){
    if (x[0]!='s'||x[1]!='i'||x[2]!='m') {z=1; cout<<"\nnão entedi, repita por fabor\n"; }else{z=0;}}else{z=0;system("cls"); cout<<"\ntente novamente \n\n";}
     }while (z!=0);
   }while(x[0]!='s'||x[1]!='i'||x[2]!='m');

}
system("cls");
}
int main()
{
 d4 A;
 for(int i=0;i<11;i++){
 leitura_data(A);
 }
 lista_data_cima(A);

}
