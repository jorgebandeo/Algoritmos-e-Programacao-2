 /**
 Escreva um programa que pede ao usu�rio para digitar o tamanho e os valores de dois vetores.
Considerando que o usu�rio n�o ir� digitar valores repetidos, ambos os vetores dever�o ser
ordenados em ordem crescente. O programa deve gerar um terceiro vetor, que ser� composto
pela intercala��o (n�o ordena��o) dos vetores anteriores, tamb�m de maneira crescente. Observe
o exemplo abaixo, considerando que o usu�rio tenha digitado que o vetor ter� tamanho 5.

Primeiro vetor: 20 30 40 50 60
Segundo vetor: 5 15 41 47 80
Vetor intercalado: 5 15 20 30 40 41 47 50 60 80

Lembrando: o terceiro vetor ser� formado pela intercala��o dos valores, e n�o a ordena��o
dos valores. **/
#include <iostream>

using namespace std;

void escrita (int *v, int n){
for(int i=0; i<n; i++){
  cout<<*(v+i);

}
}
void arrumar (int *v, int n){

int i, j, cond, temp;
cond = 1;
for (i=n-1; (i >= 1) && (cond == 1); i--) {
cond = 0;
for (j=0; j < i ;j++) {
if (*(v+j+1) < *(v+j)) {
temp = *(v+j);
*(v+j) = *(v+j+1);
*(v+j+1) = temp;
cond = 1;
}
}
}

}
int* inter (int *a,int *b, int n){
int i=0,j=0,*res,cont;
res=new int [2*n];
while(cont==2*n){

        if (*(a+i)>*(b+j)){
        *(res+j)=*(b+j);
        j++;
        cont++;
        }else{
        *(res+i)=*(a+i);
        i++;
        cont++;
        }


}


return (res);}


void leitura (int *v,int *e, int n){

for(int i=0; i<n; i++){
   cin>>*(v+i);

for (int j=0;j<i;j++){
if (*(v+i)==*(v+j)){
    i--;
    cout<<"voc� j� digitou este valor antes"<<endl;
}
}}
arrumar(v,n);
for(int i=0; i<n; i++){
   cin>>*(e+i);

   for (int j=0;j<i;j++){
if (*(e+i)==*(e+j)){
    i--;
    cout<<"voc� j� digitou este valor antes"<<endl;
}
}
for (int r=0; r<n; r++){
    if (*(e+i)==*(v+r)){
        i--;
        cout<<"voc� j� digitou este valor antes"<<endl;
    }
}

}
arrumar(e,n);
}
int main()
{int n,*v,*e,*in;;
cout<<"digite o tamanho dos vetores ";
cin>>n;

v=new int [n];
e=new int [n];


leitura(v,e,n);


*in=inter(v,e,n);

escrita(in,n);
delete []v;
delete []e;
delete []in;
return 0;}
