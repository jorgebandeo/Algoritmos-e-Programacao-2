#include <iostream>
#include <conio.h>//para utilizar o getch()
#include <ctype.h>//para utilizar o isdigit()
using namespace std;

template <typename tipo, int MAX>
struct VetGen{
tipo vetor[MAX];
};
struct naci{
int ano;
int mes;
int dia;
};
struct pessoa {
int codigo;
string nome;
naci aux;
};
int numero (int rel){
char digitado[rel];
char c;
int i=0;
int rec;
do{
        c=getch();//captura o caractere digitado pelo usu�rio

        if (isdigit(c)!=0){//se for um n�mero
            if(i!=rel){
                digitado[i] = c;//armazena no vetor de caracteres
                i++;//incrementa o �ndice do vetor de caracteres
                cout<<c;//exibe o caractere digitado
            }

       }else if(c==8&&i){//se for pressionada a tecla BACKSPACE e houver caracteres j� digitados
          digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
          i--;//o �ndice do vetor de caracteres � decrementado
          cout<<"\b \b";//o caractere digitado � apagado da tela
       }
    }while(c!=13||i<rel);//o loop vai ser executado at� que a tecla pressionada seja o ENTER (c�digo 13 na tabela ASCII) ou  meu i maior que 0
    digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
rec=atoi(digitado);
return rec;
}
template <typename tipo, int MAX>
void escrita(VetGen <tipo,MAX> &a, int j){
char digitado[100];
char c;
int i=0;
do{
        c=getch();//captura o caractere digitado pelo usu�rio
        if (isalpha(c)!=0 || (c==32&&i)){//se for uma letra ou ( tecla espace e meu i for diferente de zero )
            digitado[i] = c;//armazena no vetor de caracteres
            i++;//incrementa o �ndice do vetor de caracteres
            cout<<c;//exibe o caractere digitado
        }else if(c==8&&i){//se for pressionada a tecla BACKSPACE e houver caracteres j� digitados
            digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
            i--;//o �ndice do vetor de caracteres � decrementado
            cout<<"\b \b";//vai deletar o caractere na imagem
            }
    }while(c!=13||i<=1);//o loop vai ser executado at� que a tecla pressionada seja o ENTER (c�digo 13 na tabela ASCII) ou  meu i maior que 0
    digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string

(a.vetor[j]).nome=digitado;
}

template <typename tipo, int MAX>
void cons (VetGen <tipo,MAX> &a,int i){

(a.vetor[i]).codigo=i;
cout<<"\nseu codigo : "<<i+1<<"\ndigite seu nome : ";
escrita(a,i);
cout<<"\ndigite sua data de nacimento(xx/xx/xxxx) (";
((a.vetor[i]).aux).dia=numero(2);
cout<<"/";
((a.vetor[i]).aux).mes=numero(2);
cout<<"/";
((a.vetor[i]).aux).ano=numero(4);
cout<<")";



}
template <typename tipo, int MAX>
void print (VetGen <tipo,MAX> a, int i){
  cout<<"\n codigo : "<<(a.vetor[i]).codigo+1<<"\n nome : "<<(a.vetor[i]).nome;
cout<<"\n data de nacimento ("<<((a.vetor[i]).aux).dia << "/"<< ((a.vetor[i]).aux).mes<<"/" <<((a.vetor[i]).aux).ano<<")";
}
template <typename tipo, int MAX>
void pesquisa (VetGen <tipo,MAX> a, int pes){
for (int i=0; i<MAX; i++){
    if(pes-1==(a.vetor[i]).codigo){
print(a,i);

    }

}
}
int main()
{   int i=0;
    VetGen <pessoa,3> user;
    do{
    cout<<"\n"<<i+1<<"� consulta";
    cons(user,i);
    system("cls");
    i++;
    }while(i<3);

cout<<"digite um codigo para a ppesquisa : ";
cin>>i;
pesquisa(user,i);

    return 0;
}
