#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED



struct Porta{
    int id,hp=5;
    string nome = " Porta-Aviões ";
};

struct Enc{
    int id,hp=4;
    string nome =" Encouraçado ";
};

struct Hidro{
    int id,hp=3;
    string nome =" Hidroavião ";
};

struct Cruz{
    int id,hp=2;
    string nome =" Cruzador ";
};

struct Sub{
    int id,hp=1;
    string nome=" Submarino ";
};

template<typename tipo>
int AcertaNavio(tipo *x,int N,int id,int tam,int &cont){

    if(N>0){
        if(x[N-1].id==id){
            x[N-1].hp--;
            if(x[N-1].hp==0&&x[N-1].id!=-1){
                cont--;
                x[N-1].id=-1;
                gotoxy(tam+60,5);
                cout<<"Voce afundou um "<<x[N-1].nome;
                delay(3000);
            }

            return 0;
        }
        return AcertaNavio(x,N-1,id,tam,cont);
    }
    return 0;

}

template<typename tipo>
tipo *AlocaStruct(tipo *x, int N){

    x=new tipo[N];

    return x;
}

void ExcluiTab(int **tabf,char **tabj, int tam){ ///Exclui as matrizes alocadas dinamicamente.
    if(tam>0){
        delete tabf[tam-1];
        delete tabj[tam-1];

        return ExcluiTab(tabf,tabj,tam-1);
    }
    delete tabf;
    delete tabj;

}



#endif // STRUCTS_H_INCLUDED
