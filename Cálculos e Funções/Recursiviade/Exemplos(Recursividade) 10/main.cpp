/**
10) Escreva um programa que leia quatro valores inteiros positivos nA, nB, tA e tB, representando
respectivamente as populações atuais de dois países A e B e as taxas de crescimento anual dessas
populações, e determine se o país menos populoso poderá ultrapassar a população do outro país,
supondo que as taxas de crescimento dessas populações não variam. Em caso afirmativo, o
programa deverá determinar também o número de anos necessários para que isto aconteça.
Utilize funções recursivas para resolver o problema.
**/
#include <iostream>

using namespace std;
int tep(float nMA, float nME,float tMA,float tME,int tem){
    cout<<"\n"<<nMA<<"\n"<<nME;
if(nME>nMA){
    return tem;
}

return (tep(nMA+(nMA*tMA),nME+(nME*tME),tMA,tME,tem+1));
}
int main()
{
    float nA,nB,tA,tB;
    int tem=0;
    cout<<"população do pais A : ";
    cin>>nA;
    cout<<"população do pais B : ";
    cin>>nB;
    cout<<"taxa de crescimento do pais A em % por ano: ";
    cin>>tA;
    cout<<"taxa de crescimento do pais B em % por ano: ";
    cin>>tB;


    if(nA>nB){
     if(tA<tB){
      cout<<"quantidade de anos"<<tep(nA,nB,float(tA/100),float(tB/100),tem);
     }else{cout<<"não é possívelx";}
    }else if(nA<nB){
    if(tA>tB){
       cout<<"quantidade de anos"<<tep(nB,nA,float(tB/100),float(tA/100),tem);
     }else{cout<<"não é possívely";}
    }else{cout<<"países com mesma população";}


    return 0;
}
