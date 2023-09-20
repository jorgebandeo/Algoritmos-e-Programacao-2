#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void Insertion( int M[5][5]){
int j,i,key;
for(int x=0;x<5;x++){
for(j = 1; j < 5; j++) {
key = M[j][x];
i = j - 1;
while(i >= 0 && M[i][x] > key) {
M[i + 1][x] = M[i][x];
i = i - 1;
}
M[i + 1][x] = key;
}
}
}
int verificador_de_repetiCAo(int cartela[5][5],int coluna, int valor){
for(int l=0;l<5;l++){
            if(cartela[l][coluna]==valor){return 0;}

            }return 1;
}

void prenchimento_da_cartela(int cartela[5][5])
{srand((unsigned)time(0));//para grar números realmente aleatorios
    int valor,minimo_linha=1,c,l;

for (c=0;c<5;c++){
        for(l=0;l<5;l++){
            valor=(minimo_linha+rand()%15);
            //para complementar é usada uma função para verificar e pasar se o falor aleatorio já foi repetido ou não
            if(verificador_de_repetiCAo(cartela,c,valor)==0){l--;}else{cartela[l][c]=valor;}
            //se o valor for repetido vai diminuti uma casa da repetição para procurar outro, caso não sejá o valor é salvo na matriz
        }
        ///para que a cada linha o intrvalo de valores seja aumentado foi usado essa variavel que é levada para o limitador do intervalo do rand()
        minimo_linha=minimo_linha+15;


}
//por metodo de inserção a matriz gerada vai ser arrumada do menor ao maior
Insertion(cartela);

 //impreção da matriz para testes
for (int c=0;c<5;c++){
        cout<<endl;
        for(int l=0;l<5;l++){
           cout<<cartela[l][c]<<" / ";
        }

}


}
int main()
{
    int V[5][5];
    prenchimento_da_cartela(V);
}
