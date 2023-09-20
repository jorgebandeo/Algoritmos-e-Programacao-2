#include <iostream>

using namespace std;

int main()
{int N,M,i=0;
 cout<<"digite o tamanho da matriz"<<"\n LINHAS: ";
 cin>>M;
 cout<<"\n COLUNAS: ";
 cin>>N;

  int **r = new int*[M];
for (int i=0; i<M; i++){
r[i] = new int[N];
}

  for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
            if(l>c){
    *(*(r+l)+c)=1;
        }else{*(*(r+l)+c)=0;}
}
}






for(int l=0; l<M; l++){
   for(int c=0; c<N; c++){
    cout<<*(*(r+l)+c)<<"/";
   }
   cout<<"\n";
}

for (int i=0; i<M; i++){
delete r[i];
}
delete r;

return 0;
}
