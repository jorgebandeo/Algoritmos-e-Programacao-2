#include <iostream>

using namespace std;
void bubblesort(int *a, int n,int x,int y) {
int i, j, cond, temp;
cond = 1;
for (i=n-1; (i >= 1) && (cond == 1); i--) {
cond = 0;
for (j=0; j < i ;j++) {
if (*(a+j+x) < *(a+j+y)) {
temp = *(a+j+y);
*(a+j+y) = *(a+j+x);
*(a+j+x) = temp;
cond = 1;
}
}
}
}
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
int main()
{
    int *a,n,conf;
   cout<<"digite o tamanho do vetor ";
   cin>>n;
   a=new int [n];

   leitura(a,n);
   string im_par;

   do{
   cout<<"voce quer ordenar o seu vetor de fora crecente ou decrecente : ";
   cin>>im_par;


   if (im_par=="crecente"){
    bubblesort(a,n,1,0);
        conf=0;
   }else if(im_par=="decrecente"){
   bubblesort(a,n,0,1);
        conf=0;
   }else{
   cout<<"nao entedi, repita por fabor ";
        conf=1;
   }
   }while(conf==1);


   for (int i=0; i<n; i++){
cout<<" ( "<< *(a+i)<<" ) ";

}

   delete []a;
   return 0;
}
