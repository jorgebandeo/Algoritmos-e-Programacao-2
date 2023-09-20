#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{srand (time(NULL));
    int L=2, C=3,**A=new int *[L],**B=new int *[C];
    for (int i=0; i<L; i++ ){
        A[i]=new int [C];
    }
    for (int i=0; i<C; i++ ){
        B [i]=new int [L];
    }
    Sleep(1000);
    for (int l=0; l<L; l++){
        for (int c=0; c<C; c++){
        *(*(A+l)+c)=rand()%20+1;
        *(*(B+l)+c)=*(*(A+l)+c);
    }
    }

    for (int c=0; c<C; c++){
        for (int l=0; l<L; l++){

        cout<<*(*(B+l)+c)<<"/";

    }
    cout<<"\n";
    }
    for (int l=0; l<L; l++){
        for (int c=0; c<C; c++){
        cout<<*(*(A+l)+c)<<"/";
    }
    cout<<"\n";
    }


for (int i=0; i<C; i++){
delete A[i];
}
delete A;
return 0;
}
