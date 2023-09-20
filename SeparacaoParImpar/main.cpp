#include <iostream>

using namespace std;

int main()
{
    int *a, *impar, *par, ip=0,p=0;

    a=new int [7];
    impar =new int [7];
par =new int [7];
    for (int i=0; i<7; i++){
        cout<<" ( ";
        cin>>*(a+i);
        system("cls");
        for(int c=0; c<i+1; c++){
            cout<<" ( "<< *(a+c)<<" ) ";
        }
    }

for (int i=0;i<7;i++){
    if (*(a+i)%2==0){
        *(par+p)=*(a+i);
        p++;
    }else{
        *(impar+ip)=*(a+i);
        ip++;
    }

}
int s_ip=0,s_p=0;
cout<<endl;
for (int i=0; i<p; i++){
cout<<" ( "<< *(par+i)<<" ) ";
s_p+=*(par+i);
}

cout<<" = "<<s_p<<endl;
for (int i=0; i<ip; i++){
    cout<<" ( "<< *(impar+i)<<" ) ";
    s_ip+=*(impar+i);
}
cout<<" = "<<s_ip<<endl;


    delete []a;
    delete []impar;
    delete []par;
    return 0;
}
