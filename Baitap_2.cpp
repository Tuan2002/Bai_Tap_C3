#include<stdio.h>
#include<stdlib.h>

int main ()
{
    system("clear");
    int N, i; float S;
    S=0;
    printf("Hãy nhập số nguyên dương N: "); scanf("%d", &N);
    // Vòng for
    for (int i = 1; i <= N; i++) {S = S + 1.0 / i;}
    // Vòng while  với i = 1, S = 0;
    // while(i <= N) {S = S + 1.0 / i; i++;}
    printf("Tổng của %d số nguyên dương theo biểu thức 1/n là: %.2f\n", N, S);
    return 0;
}