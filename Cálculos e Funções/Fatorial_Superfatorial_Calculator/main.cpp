#include <iostream>

using namespace std;
int fatorial(int N){
if (N<=0){
    return 1;
}

return (fatorial(N-1)*N);
}
int superfatorial(int N){
if (N<=0){
    return 1;
}

return(superfatorial(N-1)*fatorial(N));
}



int main()
{
     int **N = new int*[3];

    for(int i = 0; i < 3; i++){

        N[i] = new int[3];
    }
    N[0][0]=1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                *(*(N+i)+j)=5;



    }
    }N[1][1]=1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                cout<<*(*(N+i)+j);



    }
    }
for (int i=0; i<3; i++){

    delete N[i];

}
    delete N;

    return 0;
}
