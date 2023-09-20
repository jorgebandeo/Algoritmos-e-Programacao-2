#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
int main(){
    gotoxy(3,7);
    cout<<"l:7 c:3";
    gotoxy(9,15);
    printf("l:15 c:9");
    gotoxy(20,3);
    printf("l:3 c:20");
    system("pause >nul");
    return 0;
}
