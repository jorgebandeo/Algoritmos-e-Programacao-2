/**
10) Escreva um programa que leia quatro valores inteiros positivos nA, nB, tA e tB, representando
respectivamente as popula��es atuais de dois pa�ses A e B e as taxas de crescimento anual dessas
popula��es, e determine se o pa�s menos populoso poder� ultrapassar a popula��o do outro pa�s,
supondo que as taxas de crescimento dessas popula��es n�o variam. Em caso afirmativo, o
programa dever� determinar tamb�m o n�mero de anos necess�rios para que isto aconte�a.
Utilize fun��es recursivas para resolver o problema.
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
    cout<<"popula��o do pais A : ";
    cin>>nA;
    cout<<"popula��o do pais B : ";
    cin>>nB;
    cout<<"taxa de crescimento do pais A em % por ano: ";
    cin>>tA;
    cout<<"taxa de crescimento do pais B em % por ano: ";
    cin>>tB;


    if(nA>nB){
     if(tA<tB){
      cout<<"quantidade de anos"<<tep(nA,nB,float(tA/100),float(tB/100),tem);
     }else{cout<<"n�o � poss�velx";}
    }else if(nA<nB){
    if(tA>tB){
       cout<<"quantidade de anos"<<tep(nB,nA,float(tB/100),float(tA/100),tem);
     }else{cout<<"n�o � poss�vely";}
    }else{cout<<"pa�ses com mesma popula��o";}


    return 0;
}
