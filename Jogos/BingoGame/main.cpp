//
//  @file   bingoGame.cpp
//  @brief  Trabalho da diciplina Algoritimos e Programação II ministrada pelo Professor Rafael Ballottin Martins.
//
//  @author Jorge Bandeo
//  @author Luiz Gustavo Kleis Platt
//  @date   September 2020
//

#include <iostream>         // Biblioteca de stream para input e output.
#include <time.h>           // Bliblioteca para gerar semente randomica utilizada pela function "srand()".
#include <locale.h>         // Biblioteca para caracteres da lingua portuguesa.
#include <windows.h>        // Biblioteca para functions do sistema.
using namespace std;

#define size_m       5      //@param size_m Define tamanho constante para as matrizes.
#define size_a       15     //@param size_a Define tamanho constante para o "randArray[size_a_short]".
#define size_a_long  75     //@param size_a Define tamanho constante para o "randArray_long[size_a]".
//zeragem dos espelhos
void zeragem(int m[size_m ][size_m ]){//( update 23/09 02:47)
for (int l=0;l<5;l++){
        for (int c=0;c<5;c++){

        m[l][c]=0;

        }
    }
}

//verificação de bingo
int bingo (int Mcomprovante[size_m ][size_m ]){//( update 23/09 02:47)
    int ax=0,c,l,au;
/**
verificação da diagonal principal
**/
     for ( c=0;c<5;c++){

        ax=ax+Mcomprovante[c][c];
 if (ax==5){return 1;}
}
        /**
verificação da diagonal secundaria
**/
ax=0;
         for ( c=4;c>=0;c--){

         ax=ax+Mcomprovante[4-c][c];
        if(ax==5){return 1;}
         }

/**
verificação das linhas
**/

for ( l=0;l<5;l++){
        ax=0;
        for ( c=0;c<5;c++){

         ax=ax+Mcomprovante[l][c];
        if(ax==5){return 1; }
        }
    }

    /**
verificação das colunas
**/

for (int l=0;l<5;l++){
    ax=0;
        for (int c=0;c<5;c++){

         ax=ax+Mcomprovante[c][l];
          if (ax==5){return 1;}
        }
    }
return 0;
}

/*! ( update 23/09 02:47)
 * Insertion();
 * .
 * Procedimento ordena vetor de menor para maior com o uso do tipo de organizador por inserção
 *
 *
 * @param vetor   Valor a ser organizado atribuido.
 *
 */
void Insertion( int n, int vetor[]){
int j , i , key ;
for(j = 1; j < n; j++) {
key = vetor[j];
i = j - 1;
while(i >= 0 && vetor[i] > key) {
vetor[i + 1] = vetor[i];
i = i - 1;
}
vetor[i + 1] = key;
}
}
/*!
 * printCard();
 * .
 * imprime a matriz
 *
 * @param card Matriz
 */
void printCard(int card[size_m][size_m], int espelho[size_m][size_m]) {
    for(size_t i=0; i<size_m; i++) {
        for(size_t j=0; j<size_m; j++) {
                if (espelho[i][j]==1){ cout<<"*"<<card[i][j]<<"*"<<"\t";}else{cout<<card[i][j]<<"\t";}

        }
        cout<<endl;
    }
}

void printGamerSortNumbers(int bingoSortCard[], int indexCountCard) {
    for(size_t i=0; i<indexCountCard; i++) {
        cout<<bingoSortCard[i]<<"\t";
    }
}

/*!
 * bingoSearchCard();
 * .
 * Function do tipo boolean retorna true or false
 *
 * @param card              Matriz que recebe valores da cartela passada por parametro.
 * @param bingoSortNumber   Numero sorteado na function "bingoSort()" passado por parametro para verificar se existe na cartela passada por parametro.
 * @return                  Retorna true se achar o numero sorteado na cartela passada por parametro.
 */
bool bingoSearchCard(int card[size_m][size_m],int esepelho[size_m][size_m], int bingoSortNumber) {
    for(int i=0; i<size_m; i++) {
        for(int j=0; j<size_m; j++) {
            if(card[i][j]==bingoSortNumber) {
                  esepelho[i][j]=1;
                return true;
            }

        }
    }
    return false;
}


/*!
 * fillRandArray();
 * .
 * Procedimento preenche vetor comecando pelo numero definido no "range_start".
 *
 * @param randArray     Vetor para armazenar valores usados dentro da funcao "randomize()".
 * @param range_start   Valor inicial atribuido a posicao "i~range_max" dentro do vetor, "range_start++" incrementa "+1" do valor inicial atribuido.
 * @param range_max     Define o maximo de posicoes que serao escritas pelo "range_start" no vetor.
 */
void fillRandArray(int randArray[], int range_start, int range_max) {
    for(size_t i=0; i<range_max; i++) {
        randArray[i]=range_start;
        range_start++;
    }
}

/*!
 * randomize();
 * .
 *
 * @ref Fisher–Yates shuffle Baseado no algoritimo Fisher–Yates shuffle
 *
 * @param randArray Vetor
 * @param range     Define a faixa de valores gerado pelo "rand()".
 * @return          Retorna numero randomico do vetor "randArray[]".
 */
int randomize(int randArray[], int range) {
    int randIndex=0, randNumber=0;
    for(range; range>0; range--) {
        randIndex=rand()%range;                          // Atribui a "randIndex" um valor randomica na faixa definida pelo parametro "range".
        randNumber=randArray[randIndex];                 // Atribui a "randNumber" um valor do array "randArray[]" no indice definido pela variavel "randIndex".
        while(randIndex<range-1) {                       // Cria um laco para fazer um swap de valores do array "randArray[]", ate chegar ao ultimo valor do array.
            randArray[randIndex]=randArray[randIndex+1]; // Troca de valores com a posicao a frente, tiranda a possibilida do valor atribuido a "randNumber" ser usado novamente.
            randIndex++;                                 // Incrementa a "randIndex""+1" passando os para as proximas posicoes do vetor.
        }
        return randNumber;                               // Retorna um numero randomico.
    }
}

int bingoSort( int bingoSortArray[],int indexSortNunmber) {
    int bingoNumber,x;
    while (x!=1){
            x=1;
        bingoNumber=(1+rand()%75);
        for(int i=0; i<indexSortNunmber;i++)
        if(bingoNumber==bingoSortArray[i]){x*=0;}else{x*=1;}

    }
    bingoSortArray[indexSortNunmber]=bingoNumber;
    return bingoNumber;
}
/*!
 * .
 * Organiza a matrix de forma ascendente.
 *
 * @ref bubbleSort Algoritimo Bubble Sort.
 *
 * @param matrix Matriz
 */
void bubbleSort(int matrix[size_m][size_m]) {
    int temp;
    for(size_t t=1; t<(size_m*size_m); t++) {
        for(size_t i=0; i<size_m; i++) {
            for(size_t j=0; j<size_m-1; j++) {
                if(matrix[i][j]>matrix[i][j+1]) {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[i][j+1];
                    matrix[i][j+1]=temp;
                }
            }
        }
        for(size_t i=0; i<size_m-1; i++) {
            if(matrix[i][size_m-1]>matrix[i+1][0]) {
                temp=matrix[i][size_m-1];
                matrix[i][size_m-1]=matrix[i+1][0];
                matrix[i+1][0]=temp;
            }
        }
    }
}

/*!
 * cardSort();
 * .
 *
 * @param card          Matriz da cartela passada pro parametro.
 * @param randArray     Array usada na function "randomize()".
 */
void cardSort(int card[size_m][size_m], int randArray[]) {
    int range=15, range_start=1, range_max=15;

    for(size_t i=0; i<size_m; i++) {
        fillRandArray(randArray, range_start, range_max);
        range=15;
        for(size_t j=0; j<size_m; j++) {
            card[i][j]=randomize(randArray, range);
            range--;
        }
        range_start+=range_max;
    }
    bubbleSort(card);
}

/*!
 * fillNames();
 * .
 * Leitura do nome dos jogadores e mensagem de boas vindas.
 *
 * @param nameArray Array para armazenar o nome dos jogadores.
 */
void fillNames(string nameArray[size_m]) {
    for(size_t i=0; i<size_m; i++) {
        cout<<"Digite seu nome: ";
        cin>>nameArray[i];
        system("cls");
        cout<<"BEM VINDO!\n"<<nameArray[i]<<"\nO bingo está prestes a começar!"<<endl;
        Sleep(1000);
        system("cls");
    }
    cout<<"O BINGO ESTÁ COMEÇANDO!\n";
    Sleep(800);
    cout<<"\nGOOD GAME!"<<endl;
    Sleep(700);
    system("cls");
    Sleep(400);
    cout<<"\nGOOD GAME!"<<endl;
    Sleep(350);
    system("cls");
    Sleep(275);;
    cout<<"\nGOOD GAME!"<<endl;
    Sleep(225);
    system("cls");
    Sleep(175);;
    cout<<"\nGOOD GAME!"<<endl;
    Sleep(150);
    system("cls");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand((unsigned int)time(NULL));
    string nameArray[size_m];
    int bingoSortNumber=0,
        countCard_1=0,
        countCard_2=0,
        countCard_3=0,
        countCard_4=0,
        countCard_5=0,
        range=75,
        indexSortNumbers=0,
        countVetorSort=1; // update 23/09 03:08
    int randArray[size_a],
        randArray_long[size_a_long],
        bingoSortArray[size_a_long],
        bingoSortCard_1[size_m],
        bingoSortCard_2[size_m],
        bingoSortCard_3[size_m],
        bingoSortCard_4[size_m],
        bingoSortCard_5[size_m];
    int card_1[size_m][size_m],
        card_2[size_m][size_m],
        card_3[size_m][size_m],
        card_4[size_m][size_m],
        card_5[size_m][size_m],
        // update 23/09 04:53
        espelho_1[size_m][size_m],
        espelho_2[size_m][size_m],
        espelho_3[size_m][size_m],
        espelho_4[size_m][size_m],
        espelho_5[size_m][size_m];
        // update 23/09 04:53
        zeragem(espelho_1);
        zeragem(espelho_2);
        zeragem(espelho_3);
        zeragem(espelho_4);
        zeragem(espelho_5);

    fillNames(nameArray);
    fillRandArray(randArray_long, 1, 75);
    cout<<"SORTEANDO AS CARTELAS.\n";
    cardSort(card_1, randArray);
    cardSort(card_2, randArray);
    cardSort(card_3, randArray);
    cardSort(card_4, randArray);
    cardSort(card_5, randArray);
    Sleep(800);
    system("cls");

    while(true) {

        //bingoSortNumber=randomize(randArray_long, range);
        //bingoSortArray[indexSortNumbers]=bingoSortNumber;

        //Sorteia na funcao bingoSort()
        bingoSortNumber=bingoSort(bingoSortArray, indexSortNumbers );

        indexSortNumbers++;
        Insertion(countVetorSort,bingoSortArray); // update 23/09 03:18
        countVetorSort++; // update 23/09 03:19
        //Imprimr numero "cantado"
         cout<<"NÚMERO - "<<bingoSortNumber<<" -"<<endl;// update 23/09 03:40
        //Imprime na tela todos valores ja sorteados
        cout<<"\nVALORES SORTEADOS: \n";
        for(size_t i=0; i<indexSortNumbers; i++) {
            cout<<bingoSortArray[i]<<"\t";
        }


         // Cartela 01
        if(bingoSearchCard(card_1,espelho_1, bingoSortNumber )) {
            bingoSortCard_1[countCard_1]=bingoSortNumber;
            countCard_1++;
            Insertion(countCard_1,bingoSortCard_1); // update 23/09 03:30
        }

        cout<<"\nCARTELA 01 JOGADOR "<<nameArray[0]<<endl;
        printCard(card_1,espelho_1);

        if(countCard_1>0) {
            cout<<"VALORES SORTEADOS NA CARTELA 1: \n";
            printGamerSortNumbers(bingoSortCard_1, countCard_1);
        }

        if(bingo(espelho_1)==1) {
            system("cls");
            cout<<"BINGO!\nPARABENS "<<nameArray[0]<<" VOCE VENCEU!\nCARTELA 01 VENCEDORA\n";
            printCard(card_1,espelho_1);

            cout<<"VALORES SORTEADOS NA CARTELA 1: \n";
            printGamerSortNumbers(bingoSortCard_1, countCard_1);

            Sleep(800);
            return 0;

        }

        // Cartela 02


        if(bingoSearchCard(card_2,espelho_2, bingoSortNumber)) {
            bingoSortCard_2[countCard_2]=bingoSortNumber;
            countCard_2++;
            Insertion(countCard_2,bingoSortCard_2); // update 23/09 03:31
        }
        cout<<"\nCARTELA 02 JOGADOR "<<nameArray[1]<<endl;
        printCard(card_2,espelho_2);

        if(countCard_2>0) {
            cout<<"VALORES SORTEADOS NA CARTELA 2: \n";
            printGamerSortNumbers(bingoSortCard_2, countCard_2);
        }

        if(bingo(espelho_2)==1) {
            system("cls");
            cout<<"BINGO!\nPARABENS "<<nameArray[2]<<" VOCE VENCEU!\nCARTELA 02 VENCEDORA\n";
            printCard(card_2,espelho_2);

            cout<<"VALORES SORTEADOS NA CARTELA 2: \n";
            printGamerSortNumbers(bingoSortCard_2, countCard_2);

            Sleep(1000);

            return 0;

        }
        // Cartela 03


        if(bingoSearchCard(card_3,espelho_3, bingoSortNumber)) {
            bingoSortCard_3[countCard_3]=bingoSortNumber;
            countCard_3++;
            Insertion(countCard_3,bingoSortCard_3); // update 23/09 03:32
        }
        cout<<"\nCARTELA 03 JOGADOR "<<nameArray[2]<<endl;
        printCard(card_3,espelho_3);

        if(countCard_3>0) {
            cout<<"VALORES SORTEADOS NA CARTELA 3: \n";
            printGamerSortNumbers(bingoSortCard_3, countCard_3);
        }

        if(bingo(espelho_3)==1) {
            system("cls");
            cout<<"BINGO!\nPARABENS "<<nameArray[2]<<" VOCE VENCEU!\nCARTELA 03 VENCEDORA\n";
            printCard(card_3,espelho_3);

            cout<<"VALORES SORTEADOS NA CARTELA 3: \n";
            printGamerSortNumbers(bingoSortCard_3, countCard_3);

            Sleep(1000);
            return 0;
        }


        // Cartela 04


        if(bingoSearchCard(card_4,espelho_4, bingoSortNumber)) {//( update 23/09 02:47)
            bingoSortCard_4[countCard_4]=bingoSortNumber;
            countCard_4++;
            Insertion(countCard_4,bingoSortCard_4); // update 23/09 03:33
        }
        cout<<"\nCAETELA 04 JOGADOR "<<nameArray[3]<<endl;
        printCard(card_4,espelho_4);

        if(countCard_4>0) {
            cout<<"VALORES SORTEADOS NA CARTELA 4: \n";
            printGamerSortNumbers(bingoSortCard_4, countCard_4);
        }

        if(bingo(espelho_4)==1) {//( update 23/09 02:47)
            system("cls");
            cout<<"BINGO!\nPARABENS "<<nameArray[3]<<" VOCE VENCEU!\nCARTELA 04 VENCEDORA\n";
            printCard(card_4,espelho_4);

            cout<<"VALORES SORTEADOS NA CARTELA 4: \n";
            printGamerSortNumbers(bingoSortCard_4, countCard_4);

            Sleep(10000);
            return 0;
        }



        // Cartela 05


        if(bingoSearchCard(card_5,espelho_5, bingoSortNumber)) {
            bingoSortCard_5[countCard_5]=bingoSortNumber;
            countCard_5++;
            Insertion(countCard_5,bingoSortCard_5); // update 23/09 03:34
        }
        cout<<"\nCARTELA 05 JOGADOR "<<nameArray[4]<<endl;
        printCard(card_5,espelho_5);

        if(countCard_5>0) {
            cout<<"VALORES SORTEADOS NA CARTELA 5: \n";
            printGamerSortNumbers(bingoSortCard_5, countCard_5);
        }

        if(bingo(espelho_5)==1) {//( update 23/09 02:47)
            system("cls");
            cout<<"BINGO!\nPARABENS "<<nameArray[4]<<" VOCE VENCEU!\nCARTELA 05 VENCEDORA\n";
            printCard(card_5,espelho_5);

            cout<<"VALORES SORTEADOS NA CARTELA 5: \n";
            printGamerSortNumbers(bingoSortCard_5, countCard_5);

            Sleep(800);
            return 0;
        }



        Sleep(1000);
        system("cls");

    }
    return 0;
}

