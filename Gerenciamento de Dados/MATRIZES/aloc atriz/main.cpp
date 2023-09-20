#include <iostream>

using namespace std;

int main()
{int N,M;
 cout<<"digite o tamanho da matriz"<<"\n LINHAS: ";
 cin>>M;
 cout<<"\n COLUNAS: ";
 cin>>N;

  int m[M][N];
for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
    *(*(m+l)+c)=1;

}

}
for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
    cout<<*(*(m+l)+c);

}

}
return 0;
}
