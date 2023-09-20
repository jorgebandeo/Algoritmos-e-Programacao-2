/**
5) Faça uma função recursiva que recebe um vetor preenchido e a quantidade de posições deste
vetor, e retorna a soma de todos os elementos do vetor.


                             v (x,y,...,n)
                             tam

                             if(tam <= 1)
                             return  v[0];

        somatorio total <----return(v[tam-1]+SOM(v[],tam-1));
                                              |
                                              ^soma
                                            return(v[tam-1]+SOM(v[],tam-1));
                                                                .
                                                                .
                                                                .
                                                            tam <= 1
**/
#include <iostream>

using namespace std;
int SOM(int v[],int tam){
if (tam <= 1){
    return v[0];
}
return (v[tam-1]+SOM(v, tam-1));

}
int main()
{
    int v[]={1,2,3,4,5,6,7,8,9,10}, tam=10;

    cout<<SOM(v,tam);
return 0;}
