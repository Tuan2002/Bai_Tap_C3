#include<stdio.h>
#include<stdlib.h>

int main ()
{
    system("clear");
    int N, i; float S;
    S=1;
    printf("Hãy nhập số nguyên dương N: "); scanf("%d", &N);
    // Vòng for
    for (int i = 1; i <= N; i++) {S = S*i;}
    // Vòng while  với i = 1, S = 1;
    // while(i <= N) {S = S*i; i++;}
    printf("Giá trị của %d! là: %.2f\n", N, S);
    return 0;
}