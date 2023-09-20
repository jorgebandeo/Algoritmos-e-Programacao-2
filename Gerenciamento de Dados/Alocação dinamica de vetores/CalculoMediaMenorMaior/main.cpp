/**
– Utilizando alocação dinâmica, declare um vetor de N inteiros (onde N é um valor fornecido
pelo usuário), leia um valor para cada posição e no final mostre a média, o menor e o maior
valor contidos no vetor.
**/

#include <iostream>

using namespace std;

int main()
{
  int n,menor,maior;
  cin>>n;
  int v[n];

   for(int i=0; i<n ; i++){
     cin>> v[i];
    }
    menor=v[0];
    maior=v[0];

    for(int i=0; i<n ; i++){
    if(menor > v[i]){
        menor =v[i];
    }else if(maior <v[i]){
    maior=v[i];
    }
    }
    cout<<menor<<"            "<<maior<<"\n";

 for(int i=0; i<n ; i++){

        media+=v[i];

    }
media=media/n;

cout<<media;

return 0;
}
