#include <iostream>
#include <unistd.h>
#include <Windows.h>
#include <locale.h>
using namespace std;
template <typename tipo, int MAX>
struct agenda{
tipo item[MAX];
int quantidade;
};
template <typename TIPO, int MAX>
bool inicializa_agenda(agenda <TIPO,MAX> &ag) {
 ag.quantidade = 0;
 return true;
};






int main()
{setlocale(LC_ALL, "Portuguese");

int opcao, *procura_id;//como escolhi usar o id como base, coloquei ele como int
procura_id = new int;

agenda<int, 10>  pessoais,comerciais;
inicializa_agenda(pessoais);
inicializa_agenda(comerciais);

    do{
        system("cls");
        cout<<"use o modo janela completa para melhor exibição";
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   tipo da agenda com que quer trabalhar\n";
        cout<<"\n\t\t\t\t\t\t\t\t(1) =(         Contatos pessoais         )";
        cout<<"\n\t\t\t\t\t\t\t\t(2) =(        Contatos comerciais        )";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t    Digite uma opcao: ";
        cin>>opcao;
        system ("cls");
        switch(opcao){
            case 1:
                break;
            case 2:
                break;
            default:
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t comado inválido, tente novamente . . . ";
        Sleep(3000);
        opcao=3;
        }


    }while(opcao==3);

    ////////////////////////////////////////transformar em função para///////////////////////////////////////////////
    //////////////////////////////////////para tebalhar com ambos timpos de agenda///////////////////////////////////////////////
    do{
        system("cls");
        cout<<"use o modo janela completa para melhor exibição";
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t               AGENDA\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\MENU";
        cout<<"\n\t\t\t\t\t\t\t\t(1) =(         inserir um novo item na agenda       )";
        cout<<"\n\t\t\t\t\t\t\t\t(2) =(      remover um item da agenda (pelo ID )    )";
        cout<<"\n\t\t\t\t\t\t\t\t(3) =(     pesquisar um item na agenda (pelo ID )   )";
        cout<<"\n\t\t\t\t\t\t\t\t(4) =(           ordenar a agenda por nome          )";
        cout<<"\n\t\t\t\t\t\t\t\t(5) =(       mostrar todos os itens da agenda       )";
        cout<<"\n\t\t\t\t\t\t\t\t(6) =(             encerrar o programa              )";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Digite uma opcao: ";
        cin>>opcao;
        system("cls");

        switch(opcao){
            case 1:
                //novo_item();<<--- da para fazer o uso da sobrecarga
                //TIPO DE AGENDA.quantidade++;
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                break;
            case 2:
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tescreva o ID para deletar o item : ";
                cin>>*procura_id;
                //TIPO DE AGENDA.quantidade--;
                system("cls");
                //remover_item(comsiderar a procura por id);<<--- da para fazer o uso da sobrecarga
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                break;
            case 3:
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tescreva o ID para progura na lista : ";
                cin>>*procura_id;
                system("cls");
                //pesquisar_item(vetor, procura_id);<<--- da para fazer o uso da sobrecarga
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                break;
            case 4:
                //ordena_por_nome();<<--- da para fazer o uso da sobrecarga
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                break;
            case 5:
                //Listar();por nome
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                break;

            case 6:
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                exit(0);
                break;

            default:
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     camando invalida, tente novamente . . .";
           Sleep(3000);


        }
    }while(opcao!=6);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

delete procura_id;
    return 0;
}
