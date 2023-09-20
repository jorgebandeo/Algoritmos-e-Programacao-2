#include <iostream>

using namespace std;
void leitura (int *a, int n){
for (int i=0; i<n; i++){
        cout<<" ( ";
        cin>>*(a+i);
        system("cls");
        for(int c=0; c<i+1; c++){
            cout<<" ( "<< *(a+c)<<" ) ";
        }
    }


}
int sietrico (int *a, int n,int regulagem){
int conf=1;
for(int i=0; i<((n-regulagem)/2); i++){
        if(*(a+i)!=*(a+(n-i-1))){
        conf*=0;
            }
        }

return conf;}
int main()
{
   int *a,n,conf;
   cout<<"digite o tamanho do vetor ";
   cin>>n;
   a=new int [n];

   leitura(a,n);

   if(n%2==0){
    conf=sietrico(a,n,0);
   }else{
    conf=sietrico(a,n,1);

   }

   cout<<endl;
   if (conf==0){
    cout<<"nâo simentrico";
   }else{
   cout<<" simentrico";
   }

delete []a;
return 0;}
