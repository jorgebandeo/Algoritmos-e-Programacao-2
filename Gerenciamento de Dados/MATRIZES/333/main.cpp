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
        cout<<"digite o valor da posição ("<<l+1<<","<<c+1<<")";
    cin>>*(*(m+l)+c);
    }
}
  int **r = new int*[M];
for (int i=0; i<M; i++){
r[i] = new int[N];
}


  for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
            if(m[l][c]>100){
                *(*(r+l)+c)=0;
            }else{
    *(*(r+l)+c)=m[l][c];
            }
    }
}

for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
    cout<<*(*(m+l)+c);
   }
   cout<<"\n";
}
for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
    cout<<*(*(r+l)+c);
   }
   cout<<"\n";
}

for (int i=0; i<M; i++){
delete r[i];
}
delete r;

return 0;
}
