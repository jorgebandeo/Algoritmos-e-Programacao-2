/**
� Utilizando aloca��o din�mica, declare um vetor de N inteiros (onde N � um valor fornecido
pelo usu�rio), leia um valor para cada posi��o e no final mostre a m�dia, o menor e o maior
valor contidos no vetor.
**/
#include <iostream>

using namespace std;




int main()
{
    int n, *vet,menor,maior;
    float media;
    cin>> n;
    int v[n];
    vet=v;
    for(int i=0; i<n ; i++){
     cin>> vet[i];
    }
    menor=*vet;
    maior=*vet;

    for(int i=0; i<n ; i++){
    if(menor > vet[i]){
        menor =vet[i];
    }else if(maior <vet[i]){
    maior=vet[i];
    }
    }
    cout<<menor<<"            "<<maior<<"\n";

 for(int i=0; i<n ; i++){

        media+=vet[i];

    }
media=media/n;

cout<<media;

return 0;
}
