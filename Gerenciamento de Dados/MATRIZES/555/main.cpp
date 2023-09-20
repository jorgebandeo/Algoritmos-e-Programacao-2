
#include <iostream>

using namespace std;

int main()
{int M,i=0,S;
 cout<<"digite o tamanho da matriz"<<"\n LINHAS: ";
 cin>>M;


  int **r = new int*[M];
for (int i=0; i<M; i++){
r[i] = new int[M];
}
for(int l=0; l<M; l++){
   for(int c=0; c<M; c++){

    *(*(r+l)+c)=rand();

}
}

  for(int l=0; l<M; l++){
   for(int c=0; c<M; c++){
            if(l!=c&&l+c!=M-1){
    S=S+*(*(r+l)+c);
        }else{}
}
}






for(int l=0; l<M; l++){
   for(int c=0; c<M; c++){
    cout<<*(*(r+l)+c)<<"/";
   }
   cout<<"\n";
}
cout<<S;
for (int i=0; i<M; i++){
delete r[i];
}
delete r;

return 0;
}
