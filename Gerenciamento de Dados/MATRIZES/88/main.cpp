#include <iostream>
#include<time.h>
using namespace std;

int main()
{srand(time(0));
    int N,i=0,l,c,lr;
 cout<<"digite o tamanho da matriz"<<"\n LINHAS e COLUNAS: ";
 cin>>N;

  int S,**r = new int*[N];
for (int i=0; i<N; i++){
r[i] = new int[N];
}
for( l=0; l<N; l++){
   for( c=0; c<N; c++){

    *(*(r+l)+c)=rand();

}
}
for( l=0; l<N; l++){
   for( c=0; c<N; c++){
    cout<<*(*(r+l)+c)<<"/";
   }
   cout<<"\n";
}
S=*(*(r+0)+0);

for ( l=0; l<N ; l++){
 for ( c=0; c<N ; c++){

    if(S<=r[l][c]){
            S=*(*(r+l)+c);
            lr=l;
    }
}
}


 for ( c=0; c<N ; c++){
        if(S>*(*(r+lr)+c)){
            S=*(*(r+lr)+c);
    }

}
cout<<S;

for (int i=0; i<N; i++){
delete r[i];
}
delete r;
return 0;
}
