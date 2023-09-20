#include <iostream>
#include <conio.h>//para utilizar o getch()
#include <ctype.h>//para utilizar o isdigit()
#include <string>
using namespace std;



template <typename tipo, int MAX>
struct agenda{
tipo item[MAX];
int quantidade;//ok
int id_con;
};
template <typename tipo, int MAX>
bool inicializa ( agenda <tipo,MAX> a[]) {

//cout<<"reniciando agenda ";
a[0].quantidade =0;
a[0].id_con =1;

return (true);
};

template <typename tipo,int MAX>
istream & operator >> (istream & is, agenda <tipo,MAX> a[]) {
char digitado[100];// uso de um vetor para gravar o que for digitado
char c;// uso de char para registrar a letra que foi precionada
int i=0;//controlador do vetor char
int contador=a[0].quantidade;//a quantidade de itens j� colocados � recebida por um contador para facilitar a leitura

    cout<<"\nn�mero de ID : ";

        a[contador]. item[0] = to_string( a[0]. id_con );//meu .item[0] recebe os ID e meu .id_con faz o papel de aumentar indefinidamente ao contrario do .quantidade que precisa diminuir quando um item � deletado
        cout<<a[contador].item[0];//imprimido meu .item[0] que representa os ID
        a[0].id_con++;//meu .id_con umenta para que o proximo item a ser incerido n�o receba o mesmo item

    cout<<"\nn�mero de CPF : ";
        /**
        para essa parte foi modificada, mas sua origem provem do canal "Programa��o em Foco" para podemos lim�tar s� n�meros
        e o n�mero de digitos inceridos pelo usu�rio.
        site onde esta o codigo : (  https://pastebin.com/SidwJUvn  )
        **/
    do{
        c=getch();//captura o caractere digitado pelo usu�rio
        if (isdigit(c)!=0){//se for um n�mero
            if(i!=11){//se meu numero de caracteres for menor que 11
                digitado[i] = c;//armazena no vetor de caracteres
                i++;//incrementa o �ndice do vetor de caracteres

                if(i==4){//se ele estiver no d�gito n�mero 4  "xxx.x"
                    cout<<"."<<c;//vai inserir um '.' na imagem e exibe o caractere digitado

                }else if(i==7){//se ele estiver no d�gito n�mero 7  "xxx.xxx.x"
                    cout<<"."<<c;//vai inserir um '.' na imagem e exibe o caractere digitado

                }else if(i==10){//se ele estiver no d�gito n�mero 10 "xxx.xxx.xxx-xx"
                    cout<<"-"<<c;//vai inserir um '-' na imagem e exibe o caractere digitado

                }else{//se n�o for nehum
                    cout<<c;//exibe o caractere digitado
                }
            }
        }else if(c==8&&i){//se for pressionada a tecla BACKSPACE e houver caracteres j� digitados
                digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
                i--;//o �ndice do vetor de caracteres � decrementado

                if(i==3){//se ele estiver no d�gito n�mero 4-1
                    cout<<"\b \b"<<"\b \b";//vai deletar o caractere e o '.' na imagem

                }else if(i==6){//se ele estiver no d�gito n�mero 7-1
                    cout<<"\b \b"<<"\b \b";//vai deletar o caractere e o '.' na imagem

                }else if(i==9){//se ele estiver no d�gito n�mero 10-1
                    cout<<"\b \b"<<"\b \b";//vai deletar o caractere e o '-' na imagem

                }else{//se n�o for nehum
                    cout<<"\b \b";//vai deletar o caractere na imagem
                }
        }

    }while(c!=13||i!=11);//o loop vai ser executado at� que a tecla pressionada seja o ENTER (c�digo 13 na tabela ASCII) e o i seja 11
    digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
    a[contador].item[1]=digitado;//meu vetor agenda numa possi��o de (0) a (numero de elementos) .item[1], que reprecenta meus cpf, recebe meus digitado que � o cpf de 11 d�gitos

    cout<<"\ndigite seu nome : ";
    i=0;//zerando o controlador do vetor char

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
    }while(c!=13||i<=1);//o loop vai ser executado at� que a tecla pressionada seja o ENTER (c�digo 13 na tabela ASCII) ou i maior que 1
    digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
    a[contador].item[2]=digitado;//meu vetor agenda numa possi��o de (0) a (numero de elementos) .item[2], que reprecenta meus nome, recebe meus digitado que � o nome de 2 a 100 d�gitos

    cout<<"\nn�mero de telefone : (";
    i=0;//zerando o controlador do vetor char
    do{
        c=getch();//captura o caractere digitado pelo usu�rio
        if (isdigit(c)!=0){//se for um n�mero
            if(i!=10){//se meu numero de caracteres for menor que 10
                digitado[i] = c;//armazena no vetor de caracteres
                i++;//incrementa o �ndice do vetor de caracteres
                if(i==3){//se ele estiver no d�gito n�mero 3  "(xx)x"
                    cout<<")"<<c;//vai inserir um ')' na imagem e exibe o caractere digitado


                }else if(i==7){//se ele estiver no d�gito n�mero 7  "(xx)xxxx-x"
                    cout<<"-"<<c;//vai inserir um '-' na imagem e exibe o caractere digitado

                }else{//se n�o for nehum
                    cout<<c;//exibe o caractere digitado
                }
            }
        }else if(c==8&&i){//se for pressionada a tecla BACKSPACE e houver caracteres j� digitados
            digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
            i--;//o �ndice do vetor de caracteres � decrementado
            if(i==2){//se ele estiver no d�gito n�mero 3-1
                cout<<"\b \b"<<"\b \b";//vai deletar o caractere e o ')' na imagem;
            }else if(i==6){//se ele estiver no d�gito n�mero 7-1
                cout<<"\b \b"<<"\b \b";//vai deletar o caractere e o '-' na imagem
            }else{//se n�o for nehum
                cout<<"\b \b";//deleta o caractere digitado
            }
        }
    }while(c!=13||i!=10);//o loop vai ser executado at� que a tecla pressionada seja o ENTER (c�digo 13 na tabela ASCII) ou meu i igial 10
    digitado[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
    a[contador].item[3]=digitado;//meu vetor agenda numa possi��o de (0) a (numero de elementos) .item[3], que reprecenta meus nome, recebe meus digitado que � o numero de telefone de 10 d�gitos

    a[0].quantidade++;//no f�m da fun��o a quantidade aumenta para a pr�ximo inser��o na agenda
return is;
}

template <typename tipo,int MAX>
void delet( agenda <tipo,MAX>  a[]){
char id[1000];// uso de um vetor para gravar o que for digitado (ID para pesquisa)
char c;// uso de char para registrar a letra que foi precionada
int i=0;//controlador do vetor char
int n_iden=0;//identificador se iens deletados
int contador=a[0].quantidade;//a quantidade de itens j� colocados � recebida por um contador para facilitar a leitura
    cout<<"digite o ID que voc� quer remover";
    do{
        c=getch();//captura o caractere digitado pelo usu�rio
        if (isdigit(c)!=0){//se for um n�mero
          id[i] = c;//armazena no vetor de caracteres
          i++;//incrementa o �ndice do vetor de caracteres
          cout<<c;//exibe o caractere digitado
       }else if(c==8&&i){//se for pressionada a tecla BACKSPACE e houver caracteres j� digitados
          id[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string
          i--;//o �ndice do vetor de caracteres � decrementado
          cout<<"\b \b";//o caractere digitado � apagado da tela
       }
    }while(c!=13||i<0);//o loop vai ser executado at� que a tecla pressionada seja o ENTER (c�digo 13 na tabela ASCII) ou  meu i maior que 0
    id[i]='\0';//o �ndice atual do vetor de caracteres recebe a termina��o da string

    for( i=0; i<contador;i++){//reutilizamos o i controlador para a repeti��o, de 0 at� n�mero de elementos registrados
        if(id==a[i].item[0]){//se o meu id (ID para pesquisa) for igual a um dos ID do vetor .item[0] representa o ID
            for(int y=i; y<contador;y++){//do ID que foi achado vai pregar o priximo item e colocar no local que foi deletado, depo�s o proximo vai receber o proximo dele ate chagar no n�mero de itens existentes
                a[y].item[0]=a[y+1].item[0];//ID atual recebe o proximo
                a[y].item[1]=a[y+1].item[1];//CPF atual recebe o proximo
                a[y].item[2]=a[y+1].item[2];//nome atual recebe o proximo
                a[y].item[3]=a[y+1].item[3];//n�mero de telefone atual recebe o proximo
            }
            n_iden=1;//n_sden recebe um dizendo que houve uma retirada de um item da agenda
        }

    }
 if(n_iden!=1){//se diferente de 1
            cout<<"\nnenhum item foi encotrado com esse ID\n";
        }else{//se for 1
            a[0].quantidade--;//a quantidade diminui
        }
}

template <typename tipo,int MAX>
void operator << (agenda <tipo,MAX> a, agenda <tipo,MAX> x[]){

if(1<=x[0].quantidade-1){//a ordena��o so acontesera se pelo menos h� do�s itens
//M�todo de Inser��o para oredenar usando como guia a primeira inicial do nome nome
int j,i;
string key1,key2,key3,key4;// essas quantro string v�o caregar meus itesm para eles poderem ser trocados depois

for(j = 1; j < x[0].quantidade; j++) {//aqui vai ser limitada a ordena��o apenas para a quantidade de itens regostrados
key1= x[j].item[0];//key [0] salva meu ID
cout<<"\nID "<<x[j].item[0]<<" "<<key1;
key2= x[j].item[1];//key [1] salva meu CPF
key3= x[j].item[2];//key [2] salva meu nome
key4= x[j].item[3];//key [3] salva meu n�mero de telefone

i = j - 1;
while(i >= 0 && x[i].item[2][0] > key3[0]) {//vai repetir at� verificar todo o programa e se meu proximo item for maior que emu nome savo em key
x[i+1].item[0] = x[i].item[0];// o ID atual recebe o proximo ID
x[i+1].item[1] = x[i].item[1];// o CPF atual recebe o proximo CPF
x[i+1].item[2] = x[i].item[2];// o nome atual recebe o proximo nome
x[i+1].item[3] = x[i].item[3];// o n�mero de telefone atual recebe o proximo n�mero de telefone
i = i - 1;
}
x[i+1].item[0] = key1;//o ID anterior recebe o ID salvo em key[0]
x[i+1].item[1] = key2;//o CPF anterior recebe o CPF salvo em key[1]
x[i+1].item[2] = key3;//o nomr anterior recebe o nome salvo em key[2]
x[i+1].item[3] = key4;//o n�mero de telefone anterior recebe o n�mero de telefone salvo em key[3]
}
}else{}
}


template <typename tipo,int MAX>
 bool verificador_de_insercao ( agenda <tipo,MAX> a[], int nd_agend_possiveis) {
    if(a[0].quantidade==(nd_agend_possiveis-1)){//se minha quantidade de itens registrados for igual q minha quantidade maxhima de items mais a compensa��o -1
        cout<<"a agenda j� est� cheia";
        return false;//retorna falso caso n�o der para colocar
    }else{
        cin>>a;//sobracarga de operador para inserir
        return true;//retorna verdadeiro que um novo item foi agendado
    }
 };
template <typename tipo,int MAX>
 bool verificador_de_delet ( agenda <tipo,MAX> a[], int nd_agend_possiveis) {
    if(a[0].quantidade==0){//se vetor .quantidade for igual a zero n�o t�m nada para apagar
        cout<<"n�o h� itens na agenda";
        return false;//retorna falso caso nao der para apagar
    }else{
        delet(a);//fun��o para deletar
        return true;//retorna verdadeiro que um item foi apagado
    }
 };




int main()
{

int quant=2;//numero de itens maximos na agenda
quant++;//preciso de uma casa a mais para que o vetor possa atualizar o valores qundo forem deletados e minha agenda estiver cheia

agenda<string,4> a[quant];
inicializa(a);

verificador_de_insercao(a,quant);
verificador_de_insercao(a,quant);

//cout<<"\n";
//cout<<"\n"<<a[0].item[0];
//cout<<"\n"<<a[0].item[1];
//cout<<"\n"<<a[0].item[2][0];
//cout<<"\n"<<a[1].item[2][0];
//cout<<"\n"<<a[0].item[3];
//cout<<"\n";

//verificador_de_delet(a,quant);
//cout<<"\n"<<a[0].item[0];
//cout<<"\n"<<a[0].item[1];
//cout<<"\n"<<a[0].item[2];
//cout<<"\n"<<a[0].item[3];


//for(int i=0; i<a[0].quantidade; i++){
  //for(int x=0;  x<a[0].quantidade;x++)  {


 // }
//}
a[0]<<a;
cout<<"\n"<<a[0].item[0];
cout<<"\n"<<a[0].item[1];
cout<<"\n"<<a[0].item[2];
cout<<"\n"<<a[0].item[3];
cout<<"\n"<<a[1].item[0];
cout<<"\n"<<a[1].item[1];
cout<<"\n"<<a[1].item[2];
cout<<"\n"<<a[1].item[3];


return 0;
}
