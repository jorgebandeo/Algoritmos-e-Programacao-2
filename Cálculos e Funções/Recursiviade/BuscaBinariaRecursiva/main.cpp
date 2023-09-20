/**
3) Fa�a um programa de busca bin�ria recursivo. Crie um vetor de 15 posi��es e preencha-o
utilizando rand, e cuidando para n�o haver valores repetidos. A seguir ordene-o (tanto o
preenchimento quanto a ordena��o n�o precisam ser recursivos) e solicite ao usu�rio que entre
com o valor que deseja procurar no vetor. Esse valor ser� levado a uma fun��o de busca bin�ria
recursiva, que ir� retornar verdadeiro se o elemento existir no vetor e falso se n�o existir. Exiba
esta mensagem na tela.

**/


#include <iostream>
#include <time.h>
#define tam 15
using namespace std;
void vetrand(int v[]){
    srand(time(0));
    int x;
    for(int i=0; i<tam; i++){
        x=rand()%100+1;
        for(int j=0; j<i; j++){
            if(v[j]==x){
            i--;
            }else{
            v[i]=x;
            }

        }
    }
}
void Insertion( int vetor[]){
int j,i,key;
for(j = 1; j < tam-1; j++) {
key = vetor[j];
i = j - 1;
while(i >= 0 && vetor[i] > key) {
vetor[i + 1] = vetor[i];
i = i - 1;
}
vetor[i + 1] = key;
}
}

int busca(int vet[], int i, int tamanho, int p) {
int m;
if (i > tamanho){
return -1;
}
else {
m = (tamanho+i)/2;
if (vet[m] == p){
return m+1;
}else{
if (p < vet[m]){
return busca(vet,i,m-1, p);
}else{
return busca(vet,m+1,tamanho, p);
}
}
}
}


int main()
{int vetor[tam], valor;
vetrand(vetor);
Insertion(vetor);
for(int i=0; i<tam; i++){
    cout<<"("<<vetor[i]<<")";

}

cout<<"digite um valor para procura no vetor : ";
cin>>valor;
if(busca(vetor,0,tam-1,valor)==-1){
    cout<<"false";
}else{
cout<<"true";
}


}
