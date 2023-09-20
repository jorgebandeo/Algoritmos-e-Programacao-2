
#include <iostream>

using namespace std;

int main()
{int N,i=0,S;
 cout<<"digite o tamanho da matriz"<<"\n LINHAS: ";
 cin>>N;


  int *v=new int[N],**r = new int*[N];
for (int i=0; i<N; i++){
r[i] = new int[N];
}
for(int l=0; l<N; l++){
   for(int c=0; c<N; c++){
*(v+l)=0;
cout<<"digite o valor na cordenada ("<<l+1<<","<<c+1<<")";
    cin>>*(*(r+l)+c);

}
}

  for(int l=0; l<N; l++){
   for(int c=0; c<N; c++){

    *(v+l)=*(v+l)+*(*(r+l)+c);

}
}

for(int l=0; l<N; l++){
   for(int c=0; c<N; c++){

    *(*(r+l)+c)*=*(v+l);

}
}





for(int l=0; l<N; l++){
   for(int c=0; c<N; c++){
    cout<<*(*(r+l)+c)<<"/";
   }
   cout<<"\n";
}
(int l=0; l<N; l++){
   cout<<*(v+l);
   cout<<"/";

}

delete []v;
for (int i=0; i<N; i++){
delete r[i];
}
delete r;

return 0;
}
