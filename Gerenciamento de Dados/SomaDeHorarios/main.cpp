#include <iostream>
#include <locale.h>
//#include <stdlib.h>
using namespace std;
int contagem=0;
typedef struct horario {
    int hora[3];
}hor;
int verificador_de_tamanho (hor v,int numero){
    if(numero!=0){
if(v.hora[numero]>0){
if(v.hora[numero]>60){ /*cout<<"\nnúmero inválido";return 1;*/}else{return 0;}}else{cout<<"\nnúmero inválido";return 1;}
    }else{
if(v.hora[numero]<0){ cout<<"\nnúmero inválido";return 1;}else{return 0;}}
return 0;
}
void leitura ( hor &v){
    string x;
   int z;
   contagem++;
   do{
        cout<<"\nesse é o "<<contagem<<" º  horário";
     do{
    cout<<"\n\nDigite um horário para ser somado"<<"\ndigite a hora (maximo dois digitos) : ";
    cin>> v.hora[0];
    }while(verificador_de_tamanho(v,0)!=0);
     do{
    cout<<"\n digite a minutos (maximo dois digitos) : ";
    cin>> v.hora[1];
    }while(verificador_de_tamanho(v,1)!=0);
    do{
    cout<<"\n digite a segundos (maximo dois digitos) : ";
    cin>> v.hora[2];
    }while(verificador_de_tamanho(v,2)!=0);
    cout<<"\nvocé digítou o seguínte horário :( "<<v.hora[0]<<" : "<<v.hora[1]<<" : "<<v.hora[2]<<" )"<<"\nvocê está certo do hprário : ";
    do{
     cin>>x;
     ///talvez seja legal fazer uma função com isso, pode facilitar
    if(x[0]!='n'||x[1]!='ã'||x[2]!='o'){
    if (x[0]!='s'||x[1]!='i'||x[2]!='m') {z=1; cout<<"\nnão entedi, repita por fabor\n"; }else{z=0;}}else{z=0;system("cls"); cout<<"\ntente novamente \n\n";}
     }while (z!=0);
   }while(x[0]!='s'||x[1]!='i'||x[2]!='m');

system("cls");
}
void escrita (hor A) {
cout<<"( "<<A.hora[0]<<" : "<<A.hora[1]<<" : "<<A.hora[2]<<" )";
}
void correcao (hor &h){

h.hora[0]=h.hora[0]+h.hora[1]/60+h.hora[2]/3600;
h.hora[1]=h.hora[1]-(60*(h.hora[1]/60))+h.hora[2]/60;
h.hora[2]=h.hora[2]-(60*(h.hora[2]/60));

}
void soma (hor x,hor y,hor &r){
for(int i=0; i<3;i++){
    r.hora[i]=x.hora[i]+y.hora[i];
}
correcao (r);
}

int main()
{setlocale(LC_ALL, "portuguese");
   hor A,B,res;

leitura(A);
leitura(B);
escrita(A);
cout<<" + ";
escrita(B);
cout<<" = ";
soma(A,B,res);
escrita(res);
return 0;}
