#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    system("clear");
    int N, i, S=200, L=0; //Là số tiền Mai cho vào mỗi ngày
    for (int i = 1; i <= 30; i++) {L= L+1; S= S+L;}
    cout << "Giá trị tiền tiết kiệm của mai sau 30 ngày là: "<<S*1000<<"đ\n";
    return 0;
}