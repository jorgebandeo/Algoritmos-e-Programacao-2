//
//  @file   bingoGame.cpp
//  @brief  Trabalho da diciplina Algoritimos e Programação II ministrada pelo Professor Rafael Ballottin Martins
//
//  @author Jorge Bandeo
//  @author Luiz Gustavo Kleis Platt
//  @date   September 2020
//

#include <iostream>
#include <time.h>
#include <locale.h>         // Biblioteca para caracteres da lingua portuguesa.
#include <windows.h>
using namespace std;

#define size_m       5      //@param size_m Define tamanho constante para as matrizes.
#define size_a       15     //@param size_a Define tamanho constante para o "randArray[size_a_short]".
#define size_a_long  75     //@param size_a Define tamanho constante para o "randArray_long[size_a]".

/*!
 * void printCard
 * .
 * imprime a matriz
 *
 * @param card Matriz
 */
void printCard(int card[size_m][size_m]) {
    for(size_t i=0; i<size_m; i++) {
        for(size_t j=0; j<size_m; j++) {
            cout<<card[i][j]<<"\t";
        }
        cout<<endl;
    }
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

/*!
 * .
 * Organiza a matrix de forma ascendente
 *
 * @ref bubbleSort Algoritimo Bubble Sort
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
 * .
 *
 * @param card
 * @param randArray
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

void fillNames(string nameArray[size_m]) {
    for(size_t i=0; i<size_m; i++) {
        cout<<"Digite seu nome: ";
        cin>>nameArray[i];
        system("cls");
        cout<<"BEM VINDO!\n"<<nameArray[i]<<"\nO bingo está prestes a começar!"<<endl;
        Sleep(1000);
        system("cls");
    }
    cout<<"O bingo começando!\n";
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
    srand(time(NULL));
    string nameArray[size_m];
    int randArray[size_a],
        randArray_long[size_a_long];
    int card_1[size_m][size_m],
        card_2[size_m][size_m],
        card_3[size_m][size_m],
        card_4[size_m][size_m],
        card_5[size_m][size_m];

    fillNames(nameArray);
    cout<<"SORTEANDO AS CARTELAS.\n";
    cardSort(card_1, randArray);
    cardSort(card_2, randArray);
    cardSort(card_3, randArray);
    cardSort(card_4, randArray);
    cardSort(card_5, randArray);
    Sleep(800);
    system("cls");
    while(true) {

        cout<<"CARTELA 01 JOGADOR "<<nameArray[0]<<endl;
        printCard(card_1);

        cout<<"\nCAETELA 02 JOGADOR "<<nameArray[1]<<endl;

        printCard(card_2);

        cout<<"\nCAETELA 03 JOGADOR "<<nameArray[2]<<endl;

        printCard(card_3);

        cout<<"\nCAETELA 04 JOGADOR "<<nameArray[3]<<endl;

        printCard(card_4);

        cout<<"\nCAETELA 05 JOGADOR "<<nameArray[4]<<endl;

        printCard(card_5);
        Sleep(5000);
        system("cls");
    }

    return 0;
}
