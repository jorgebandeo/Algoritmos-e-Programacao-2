#include <iostream>

using namespace std;

int** dinsom(int **M,int **N,int lin, int col){
int **R = new int*[lin];
    for(int i = 0; i < lin; i++){
        R[i] = new int[col];
    }

for(int l=0; l<lin;l++){
for(int c=0; c<col;c++){
*(*(R+l)+c)=*(*(M+l)+c)+*(*(N+l)+c);
}
}
return R;
}

void preenche(int **mat, int LIN, int COL){
 for(int l=0; l<LIN;l++){
for(int c=0; c<COL;c++){
        cout<<"digite o valor da matriz ["<<l<<"]["<<c<<"] : ";
cin>>*(*(mat+l)+c);
}
}
}
void printR (int **R, int LIN, int COL){
 for(int l=0; l<LIN;l++){
for(int c=0; c<COL;c++){
cout<<*(*(R+l)+c);
}
cout<<endl;
}

}
void x(int **m){
int aux,tam=3;
for (int i=0; i<tam;i++){
  for (int j=i+1; j<tam;j++){
    if(j!=i){
        aux=*(*(m+j)+i);
        *(*(m+j)+i)=*(*(m+i)+j);
        *(*(m+i)+j)=aux;

    }
}
}



}
int main()
{
    int lin,col;
    cout<<"digite o numero de linhas : ";
    cin>>lin;
    cout<<"digite o numero de colunas : ";
    cin>>col;
int ** R;
    int **M = new int*[lin];
    int **N = new int*[lin];

    for(int i = 0; i < lin; i++){
        M[i] = new int[col];
        N[i] = new int[col];
    }


//cout<<"preencha a matiz M\n";
   // preenche(M, lin, col);
cout<<"preencha a matiz N\n";
    preenche(N, lin, col);
x(N);
    //R=dinsom(M,N,lin,col);
cout<<"soma de M mais N\n";
    printR(N,3,3);


    for (int i=0; i<lin; i++){
    delete M[i];
    delete N[i];
    delete R[i];
}
    delete M;
    delete N;
    delete R;
    return 0;
    }
