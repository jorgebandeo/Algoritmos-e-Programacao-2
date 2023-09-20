#include <iostream>

using namespace std;

void bubblesort(int *a, int n) {
int i, j, cond, temp;
cond = 1;
for (i=n-1; (i >= 1) && (cond == 1); i--) {
cond = 0;
for (j=0; j < i ;j++) {
if (*(a+j+1) < *(a+j)) {
temp = *(a+j);
*(a+j) = *(a+j+1);
*(a+j+1) = temp;
cond = 1;
}
}
}
}

int* inter (int n, int *a , int *b){
int *res;
int i=0,j=0,k=0;
res=new int [2*n];

while (i<n && j <n){
    if(*(a+i)<*(b+j)){
        *(res+k)=*(a+i);
        i++;
    }else{
        *(res+k)=*(b+j);
        j++;
    }
    k++;

}
while (i<n){
    *(res+k)=*(a+i);
    i++;
    k++;
}
while (j<n){
    *(res+k)=*(b+j);
    j++;
    k++;
}
return (res);}


int veri(int i, int *a){
cout<<"digite o vetor "<<endl;
     int con=0;
     for (int c=0; c<=i; c++){
            if (*(a+i)!= *(a+c)){
                    cout<<" ( "<< *(a+c) <<" ) ";

            }else if(c==i){
                cout<<" ( "<< *(a+c) <<" ) ";


            }else {
cout<<" ( "<< *(a+c) <<" ) ";

            con=1;
            i--;

            }
            if (con==1)

            {
                if(i==c){
cout<<"  valor repetido tente novamente :  ";
            }}
            }


return i;}


int main()
{
    int n,*a,*b,*res;
    cout<<"digite o valor do tamanho dos vetores que você quer erar : ";
    cin>>n;
    a=new int[n];
    b=new int[n];

   // leitura dos matrizes sem repetição
   cout<<"digite o vetor A"<<endl;
   for (int i=0; i<n ; i++){

cout<<" ( ";
    cin>>*(a+i);

    system ("CLS");

i=veri(i,a);

   }



     cout<<"digite o vetor B"<<endl;
   for (int i=0; i<n ; i++){

cout<<" ( ";
    cin>>*(b+i);

system ("CLS");

for (int c=0;c<n;c++){

if (*(b+i)==*(a+c)){

i--;

cout<<" valor já registrado no vetor A";
c=n+1;
}
}i=veri(i,b);}

// aqui acaba a leitura dos vetores sem repetição enntre eles

// arrumando vetores A e B

bubblesort(a,n);
bubblesort(b,n);




system ("CLS");

res=inter(n,a,b);

for(int i=0; i<(2*n); i++){
cout<<" ( "<<*(res + i)<<" ) ";

}


delete []res;
delete []a;
delete []b;
return 0;}
