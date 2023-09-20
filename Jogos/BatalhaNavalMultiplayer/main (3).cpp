#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>
#include <locale.h>
using namespace std;
#include "codefun.h"
#include "structs.h"






 void escreveTabFinal(int ** tabuleiro, int tamMatriz){

    textcolor(3,0);
    for(int i = 0; i < tamMatriz; i++){
            cout<<"  | ";
        for(int j = 0; j < tamMatriz; j++){

           if(tabuleiro[i][j]>9){
                cout << tabuleiro[i][j] << "| ";
            }else if(tabuleiro[i][j]==-1){
                textcolor(4,4);
                cout << " ";
                textcolor(3,0);

                cout<<" | ";
            }else if(tabuleiro[i][j]==0){
                cout<<" "<<" | ";
            }else if(tabuleiro[i][j]==-2){
                textcolor(9,9);
                cout << " ";
                textcolor(3,0);
                cout<<" | ";
            }else{
                 cout << tabuleiro[i][j] << " | ";
            }
        }


        cout <<"| " << i << endl;
        cout<<"  ";
        for(int a = 0; a < tamMatriz; a++){
            cout << "----";
        }
        cout << endl;
    }
    cout<<"  ";
    for(int i = 0; i < tamMatriz; i++){
        if (i<10){
            cout<<" "<< i <<"  ";
        }else{
            cout<<" "<< i <<" ";
        }

    }
 }

void escreveTabJogo(char ** tabuleiro, int tamMatriz){
    for(int i = 0; i < tamMatriz; i++){
            cout<<"  | ";
        for(int j = 0; j < tamMatriz; j++){

                if(tabuleiro[i][j]=='X'){
                    textcolor(4,4);
                    cout << tabuleiro[i][j];
                    textcolor(3,0);
                    cout << " | ";
                }else if(tabuleiro[i][j]=='O'){
                    textcolor(9,9);
                    cout << tabuleiro[i][j];
                    textcolor(3,0);
                    cout << " | ";
                }else{
                 cout << tabuleiro[i][j] << " | ";
                }
        }
        cout <<"| " << i << endl;
        cout<<"  ";
        for(int a = 0; a < tamMatriz; a++){
            cout << "----";
        }
        cout << endl;
    }
    cout<<"  ";
    for(int i = 0; i < tamMatriz; i++){
        if (i<10){
            cout<<" "<< i <<"  ";
        }else{
            cout<<" "<< i <<" ";
        }

    }


}


int** alocaTabuleiro(int tamMatriz){

    int ** tabuleiro = new int*[tamMatriz];
    for(int i = 0; i < tamMatriz; i++){
        tabuleiro[i] = new int[tamMatriz];
    }
    return tabuleiro;
}

void inicializaTabuleiro(int ** tabuleiro, int tamMatriz){

    for(int i = 0; i < tamMatriz; i++){
        for(int j = 0; j < tamMatriz; j++){
            tabuleiro[i][j] = 0;
        }
    }

} /// inicializa com água (A) em todas as posições

bool ValidaCoord(int &y,int &x, int tam,int tamL, int tamC,int **Tab){
    x = rand()%tam;
    y = rand()%tam;
    bool ok=true;

    for(int i = 0; i < tamL; i++){
        for(int j = 0; j < tamC; j++){
            if(i + x >= tam || j + y >= tam || Tab[i+x][j+y]!=0){ /// Esse IF verifica se o barquinho será colocado fora do tabuleiro, caso ocora, serão gerados novos rand
                ok=false;
            }
        }
    }
    if(!ok){
        return ValidaCoord(y,x,tam,tamL,tamC,Tab);
    }else{
    return true;
    }
}

template<typename Tipo>

void inserebarco(int ** tabuleiro, int tamMatriz,int tamL,int tamC,int numdebarcos,bool E_hidroaviao,int &id,Tipo *navio){


    for(int a =0 ; a<numdebarcos; a++){

        bool pos = rand()%2;//define o posicionamento do barco horizontal o vertical
        int intermediario;

        if(pos){//true o barco fica na vertical se não se mantem na horizontal
            intermediario=tamL ;
            tamL=tamC;
            tamC=intermediario;
        }
        int x=0, y=0;

            ValidaCoord(y,x,tamMatriz,tamL,tamC,tabuleiro);

           if(!pos){//barco na horizontal

               for(int i = 1; i < tamL-1; i++){//i=1 e tamanho de linhas-1 para retirar a "borda superior e inferior" do barco para ser colocado no tabuleiro
                    for(int j = 1; j < tamC-1; j++){//j=1 e tamanho de colunas-1 para retirar a "borda laterais" do barco para ser colocado no tabuleiro
                         if(E_hidroaviao){
                            if((i+j)%2!=0){tabuleiro[i+x][j+y] = id;
                            }
                        }else{
                            tabuleiro[i+x][j+y] = id;
                         }
                    }

            }
           }else{//barco na vertical
           for(int i = 1; i < tamC-1; i++){//i=1 e tamanho de colunas-1 para retirar a "borda superior e inferior" do barco para ser colocado no tabuleiro
                    for(int j = 1; j < tamL-1; j++){//j=1 e tamanho de linas-1 para retirar a "borda laterais" do barco para ser colocado no tabuleiro
                         if(E_hidroaviao){
                         if((i+j)%2!=0){tabuleiro[j+x][i+y] = id;}}else{
                            tabuleiro[j+x][i+y] = id;
                         }
                    }

            }







        }
        navio[a].id=id;

        id++;
}
}

int srd (int i, int &n_Porta_Avioes, int &n_Encouracados, int &n_Hidroavioes, int &n_Cruzadores, int &n_Submarinos){
    srand(time(NULL));
    int rander=0,x;
    x=(38*(i*i)/225)-38;

    while(x>=1)
    {
        //enquanto o número de espaços que podem ser usados não forem preenchidos vai repetir o laço
        if(x>5) //para evitar que o rand de valores maiores que 5 assim descartando repetições desnecessárias
        {
            rander=rand()% 5 +1;// o rand vai receber um valor entre o 1 e 5
        }
        else  //este caso é para sortear barcos com espaços iguais ou menores a x, numa maiores
        {
            rander=rand()% x +1; // o rand vai receber um valor entre o 1 e x
        }
        switch (rander)
        {
        case 1: //para rand 1 quer dizer componente com 1 espaço

            x=x-1;//como um navio com 1 espaço foi adicionado meu número de espaços disponíveis diminui 1
            n_Submarinos++;//aumenta 1 navio de um espaço
            break;

        case 2://para rand 2 quer dizer componente com 2 espaço
            x=x-2;//como um navio com 2 espaço foi adicionado meu número de espaços disponíveis diminui 2
            n_Cruzadores++;//aumenta 2 navio de um espaço
            break;

        case 3:
            x=x-3;
            n_Hidroavioes++;
            break;

        case 4:
            x=x-4;
            n_Encouracados++;
            break;
        default:
            x=x-5;
            n_Porta_Avioes++;
            break;
        }//o valor idependente de qual seja ira ser diminuido ate 0
    }
}

char **Tabjogo(int tam){

    char **TabJogo = new char*[tam];
    for(int i = 0; i < tam; i++){
        TabJogo[i] = new char[tam];
    }

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            TabJogo[i][j]='~';
        }
    }
    return TabJogo;
}

int **TabFinal(int **tabuleiro,int &tam){ ///realoca a mtriz para ficar do tamanho definido pelo jogador. e facilitar a manipulação durante o jogo;
//////////////////////////////////////////////////////////////////////////
   int ** mat = new int*[tam-2];
    for(int i = 0; i < tam-2; i++){
        mat[i] = new int[tam-2];
    }

    for(int i=0;i<tam-2;i++){
        for(int j=0;j<tam-2;j++){
            mat[i][j]=tabuleiro[i+1][j+1];
        }
    }
    for (int i=0; i<tam; i++){
        delete tabuleiro[i];
    }
    delete tabuleiro;     ///deleta a matriz anterior.

    tam-=2; //atualiza o tamanho da matriz para o tamanho real dela.


 ////////////////////////////////////////////////////////////////////////////


    return mat; //retorna o endereço da nova matriz.

}


bool VerificaCoord(int L, int C,int tam,int **Tab){
    if(L>tam-1 || L<0 || C>tam-1 || C<0||Tab[L][C]==-1){
        gotoxy(tam*5,4);
        cout<<"Coordenadas invalidas ";
        delay(2000);

        return false;
    }else{

        return true;
    }
}





int JogarBatalha(int **TabFinal,char **TabJogo,int numP,int numEnc,int numHidro,int  numCruz,int numSub,int tam,Porta *PortaAviao,Enc *Encouracado,Hidro *Hidroaviao,Cruz *Cruzador,Sub *Submarino ){

    int L,C,ID,pontos=0;
    bool valido,Jogar=true;
    int cont=0;//numP+numEnc+numHidro+numCruz+numSub;
    int tentativas=0;

    while(Jogar){

        valido=false;
        while(!valido){
            clrscr();
            escreveTabFinal(TabFinal, tam);
            cout<<endl<<endl;
            escreveTabJogo(TabJogo, tam);

            gotoxy(tam*5,2);
            cout<<"Informe uma coordenada para atacar: Linha e Coluna : ";
            fflush(stdin);
            cin>>L;
            fflush(stdin);
            gotoxy(tam*5,3);
            cin>>C;
            fflush(stdin);
            valido = VerificaCoord(L,C,tam,TabFinal);


        }//fim do while de validação de coordenada.


        if (TabFinal[L][C]!=0){
            ID=TabFinal[L][C];
            TabFinal[L][C]=-1;
            TabJogo[L][C]='X';
            gotoxy(tam*5,6);
            cout<<"ACERTOU !!!";

            AcertaNavio(PortaAviao,numP,ID,tam,cont);
            AcertaNavio(Encouracado,numEnc,ID,tam,cont);
            AcertaNavio(Hidroaviao,numHidro,ID,tam,cont);
            AcertaNavio(Cruzador,numCruz,ID,tam,cont);
            AcertaNavio(Submarino,numSub,ID,tam,cont);

            pontos++;

        }else{
            TabFinal[L][C]=-2;
            TabJogo[L][C]='O';
            gotoxy(tam*5,6);
            cout<<"ERROU !!!!";
        }

        if(cont<=0){
            gotoxy(tam*5,8);
            cout<<"PARABÉNS VOCE TERMINOU O JOGO!!!!!!!!!!!!!!!";
            gotoxy(tam*5,10);
            system("pause");

            Jogar=false;

        }

        tentativas++;


    }//end do while jogar
    pontos=(pontos*1000)/tentativas;
    gotoxy(tam*5,12);
    cout<<"Voce fez : "<<pontos<<" Pontos ";
    delay(3000);
    clrscr();
    cout<<"FIM DE JOGO: ";
    return pontos;

}

void Inicio(int &tamMatriz, char nome[]){
    int x;
    do{
    cout << "Bem vindo ao Batalha Naval!" << endl;
    cout << "Digite o tamanho do tabuleiro (pelo menos 15)" << endl;

    cout << "1) continuar" << endl;
    cout << "2) lista de pontuação" << endl;
    cin>>x;
    if(x==1){
    cout<<"Digite seu nome : ";
    cin>>nome;
    cout<<"Digite o tamanho do campo : ";
    do{
        cin >> tamMatriz;
        if(tamMatriz < 15 || !cin.good()){
            cout << "Tamanho invalido! Digite novamente" << endl;
            cin.clear();
            cin.ignore(10000, '\n'); /// cin.clear limpa as flags de erros.
                                     /// e o cin.ignore pula para a proxima linha, ignorando oq foi digitado, caso nao tivesse isso ele daria um loop de "Tamanho invalido! Digite novamente"
                                     /// foi escolhido o tamanho 10000 pois é o numero de caracteres que ele pula e espera-se que um usuário nao digite + de 10000 caracteres
        }
    }while(tamMatriz < 15 || !cin.good()); /// a funcao cin.good retorna se a leitura deu certo e se o tipo lido é o mesmo da variavel, evitando erros de digitação de caracteres
    cout << tamMatriz << endl;
    tamMatriz=tamMatriz+2;
    }else if(x==2){
        system("cls");
    ifstream ler;
    char tex[50];
    ler.open("registro.txt");
    while(ler.getline(tex,50)){
        cout<<tex<<endl;
    }
    ler.close();
    system("pause");
    system("cls");
    }
    }while(x!=1);
}
bool menu (){
char nom[100];
fstream arquivo;
char x;
do{
cout<<"1) (  jogar novamente ) \n2) ( sair )\n : ";
cin>>x;

switch (x){
case '1':
    return true;
    break;
case '2':

    return false;
    break;
default:
    system("cls");
    cout<<"não entendi, tente novamente";
   x='x';
}
}while(x=='x');
//system("cls");
}
void verifica_tamanho(int &tamMatriz ){

    do{
        cin >> tamMatriz;
        if(tamMatriz < 15 || !cin.good()){
            cout << "Tamanho invalido! Digite novamente" << endl;
            cin.clear();

        }
    }while(tamMatriz < 15 || !cin.good()); /// a funcao cin.good retorna se a leitura deu certo e se o tipo lido é o mesmo da variavel, evitando erros de digitação de caracteres


}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[100];
    int tamMatriz,id=1;
    int **tabF;
    char **tabJogo;
    char id_arquivo_in[3];
    int id_arquivo_out;
    fstream arq;

     arq.open("registro.txt",fstream::in);
     if( !arq.is_open()){
     arq.open("registro.txt",fstream::out);
     arq<<"0\n\n\n\n   ";
     arq.close();
     }
     arq.seekp(0);
     arq.getline(id_arquivo_in,3);
     id_arquivo_out=atoi(id_arquivo_in);
     arq.close();

    Porta *PortaAviao;
    Enc *Encouracado;
    Hidro *Hidroaviao;
    Cruz *Cruzador;
    Sub *Submarino;



    srand(time(NULL));
    do{
    Inicio(tamMatriz,nome);

    int ** tabuleiro = alocaTabuleiro(tamMatriz); /// O tabuleiro é alocado na memoria conforme o tamanho digitado pelo usuario


    int numPortaAvioes=1,numEncouracados=2,numHidroavioes=5,numCruzadores=3,numSubmarinos=4;  /// Para gerar 2 porta avioes devem haver pelo menos 30 linhas/colunas

    inicializaTabuleiro(tabuleiro, tamMatriz);



    srd(tamMatriz-2,numPortaAvioes,numEncouracados,numHidroavioes,numCruzadores,numSubmarinos);


    PortaAviao=AlocaStruct(PortaAviao,numPortaAvioes);
    Encouracado=AlocaStruct(Encouracado,numEncouracados);
    Hidroaviao=AlocaStruct(Hidroaviao,numHidroavioes);
    Cruzador=AlocaStruct(Cruzador,numCruzadores);
    Submarino=AlocaStruct(Submarino,numSubmarinos);


    inserebarco(tabuleiro, tamMatriz,3,7,numPortaAvioes,false,id,PortaAviao);
    inserebarco(tabuleiro, tamMatriz,3,6,numEncouracados,false,id,Encouracado);
    inserebarco(tabuleiro, tamMatriz,4,5,numHidroavioes,true,id,Hidroaviao);
    inserebarco(tabuleiro, tamMatriz,3,4,numCruzadores,false,id,Cruzador);
    inserebarco(tabuleiro, tamMatriz,3,3,numSubmarinos,false,id,Submarino);
    cout << endl;

    tabF=TabFinal(tabuleiro,tamMatriz);
    tabJogo=Tabjogo(tamMatriz);




   int pontos=JogarBatalha(tabF,tabJogo,numPortaAvioes,numEncouracados,numHidroavioes,numCruzadores,numSubmarinos,tamMatriz,PortaAviao,Encouracado,Hidroaviao,Cruzador,Submarino);






    delete []PortaAviao;
    delete []Encouracado;
    delete []Hidroaviao;
    delete []Cruzador;
    delete []Submarino;
    ExcluiTab(tabF,tabJogo,tamMatriz);
    arq.open("registro.txt",fstream::in|fstream::out|fstream::app);
    int pos=arq.tellg();
    arq.seekp(pos);
    arq<<"\n"<<id_arquivo_out<<" "<<nome<<" "<<pontos<<endl;



    arq.seekp(0)<<id_arquivo_out++;


     arq.close();

    }while(menu()==true);
    return 0;

}
