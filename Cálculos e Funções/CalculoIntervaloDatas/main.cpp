#include <iostream>

using namespace std;
int contagem=0;

struct data{

int dat[3];
};
void escrita (data x) {
cout<<"( "<<x.dat[0]<<" / "<<x.dat[1]<<" / "<<x.dat[2]<<" )";
}
int veri_data (data v){



                    if (v.dat[0]/100==0){
                        if (v.dat[0]<1){return 0;}
                        else if(v.dat[1]/100!=0){return 0;}
                        else if (v.dat[1]>12){return 0;}
                        else if (v.dat[1]<1){return 0;}

                        if (v.dat[2]%4==0&&v.dat[2]%100!=0){///ano bixesto

                        if(v.dat[1]==2){
                            if(v.dat[0]>29){return 0;}
                            else{return 1;}

                            if(v.dat[1]%2==0){
                                    if(v.dat[0]>30){return 0;}
                                    else{return 1;}
                        }else if (v.dat[0]>31){return 0;}
                        else{return 1;}


                        }


                        }else{///ano normal

                        if(v.dat[1]%2==0){
                                    if(v.dat[0]>30){return 0;}
                                    else{return 1;}
                        }else if (v.dat[0]>31){return 0;}
                        else{return 1;}

                        }
                    }else{return 0;}




}
void leitura ( data &v){
    string x;
   int z;
   contagem++;
   do{
        cout<<"\nesse é o "<<contagem<<" º  horário";
     //do{
    cout<<"\n\n"<<"\ndigite a dia (maximo dois digitos) : ";
    cin>> v.dat[0];
    //}while(veri_data(v,0)!=0);
    // do{
    cout<<"\n digite a mês (maximo dois digitos) : ";
    cin>> v.dat[1];
    //}while(veri_data(v,1)!=0);
   // do{
    cout<<"\n digite a ano  (maximo quatro digitos) : ";
    cin>> v.dat[2];
    //}while(veri_data(v,2)!=0);
    cout<<"\nvocé digítou a seguínte data :( "<<v.dat[0]<<" : "<<v.dat[1]<<" : "<<v.dat[2]<<" )"<<"\nvocê está certo do hprário : ";
    do{
     cin>>x;
     ///talvez seja legal fazer uma função com isso, pode facilitar
    if(x[0]!='n'||x[1]!='ã'||x[2]!='o'){
    if (x[0]!='s'||x[1]!='i'||x[2]!='m') {z=1; cout<<"\nnão entedi, repita por fabor\n"; }else{z=0;}}else{z=0;system("cls"); cout<<"\ntente novamente \n\n";}
     }while (z!=0);
   }while(x[0]!='s'||x[1]!='i'||x[2]!='m');

system("cls");
}
void intervalo(data x,data y, data &in){
if(x.dat[2]>y.dat[2]){
if(x.dat[0]<y.dat[0]){
x.dat[0]=x.dat[0]+60;
x.dat[1]=x.dat[1]-1;
}
if (x.dat[1]<y.dat[1]){
x.dat[1]=x.dat[1]+60;
x.dat[2]=x.dat[2]-1;
}
in.dat[0]=x.dat[0]-y.dat[0];
in.dat[1]=x.dat[1]-y.dat[1];
in.dat[2]=x.dat[2]-y.dat[2];
}else{
if(x.dat[0]>y.dat[0]){
y.dat[0]=y.dat[0]+60;
y.dat[1]=y.dat[1]-1;
}
if (x.dat[1]>y.dat[1]){
y.dat[1]=y.dat[1]+60;
y.dat[2]=y.dat[2]-1;
}
in.dat[0]=y.dat[0]-x.dat[0];
in.dat[1]=y.dat[1]-x.dat[1];
in.dat[2]=y.dat[2]-x.dat[2];


}
}
int main()
{
    data A,B,res;
    leitura(A);
      leitura(B);
      intervalo(A,B,res);
      escrita(res);

return 0;}
