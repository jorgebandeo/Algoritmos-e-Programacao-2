#include <iostream>
#include <fstream>
using namespace std;

int main()
{  int n_mp,media;
   cout<<"digite o númeor de medias parcias: ";
   cin>>n_mp;

    ofstream ar;

    ar.open("ar.txt",ofstream::app );
    for (int i=0; i<n_mp; i++){
    cout<<"digite a media numero "<<i+1<< " : ";
    cin>>media;
    ar<<i+1<<"ª "<<media<<endl;
    }
    ar.close();
    return 0;
}
