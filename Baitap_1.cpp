#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Selection;
int main ()
{
    system("clear");
    printf("1. Ví dụ 1: Tìm giá trị lớn nhất của 3 số nhập vào\n");
    printf("2. Ví dụ 2: Nhận dạng tam giác và tính chu vi, diện tích\n");
    printf("3. Ví dụ 3: Tìm số ngày của tháng trong một năm bất kì\n");
    printf("4. Ví dụ 4: Tính tổng của N số tự nhiên\n");
    printf("5. Ví dụ 5: Tính tổng của N số số chẵn\n");
    printf("6. Ví dụ 6: Tính tổng của N số số lẻ\n");
    printf("Mời bạn nhập lựa chọn: ");
    scanf("%d", &Selection);
    system("clear");
    switch (Selection)
    {
        case 1: 
        {
            int a, b, c, max;
            printf("Hãy nhập vào 3 số bạn muốn \n"); 
            printf("Số thứ nhất = ");
            scanf("%d", &a);
            printf("Số thứ hai = ");
            scanf("%d", &b);
            printf("Số thứ ba = ");
            scanf("%d", &c);
            max=a;
            if (max<b) max=b;
            if (max<c) max=c;
            printf("Giá trị của số lớn nhất bạn đã nhập vào là: %d\n",max);
            break;
        }
        case 2:
        {
            float a, b, c, ncv, dt;
            printf("Hãy nhập độ dài 3 cạnh của tam giác \n"); scanf("%f %f %f", &a , &b, &c);
            if ((a+b>c) && (b+c>a) && (a+c>b))
            {
                ncv = (a + b + c)/2; dt = sqrt(ncv*(ncv-a)*(ncv-b)*(ncv-c));
                printf("3 số vừa nhập vào là 3 cạnh của một tam giác\n");
                printf("Chu vi của tam giác là: %.2f\n", 2*ncv);
                printf("Diện tích của tam giác là: %.2f\n", dt);
            }
            else
                printf("3 số vừa nhập vào không phải là 3 cạnh của một tam giác\n");
            break;
        }
        case 3:
        {
            int m, y;
            printf("Hãy nhập tháng và năm bạn muốn kiểm tra: "); scanf("%d %d", &m, &y);
            switch (m)
            {
                case 2:
                {
                    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
                        printf("Tháng %d năm %d có 29 ngày\n",m ,y);
                    else 
                        printf("Tháng %d năm %d có 28 ngày\n",m ,y);
                    break;
                }
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                {
                    printf("Tháng %d năm %d có 31 ngày\n",m ,y);
                    break;
                }
                case 4: case 6: case 9: case 11:
                {
                    printf("Tháng %d năm %d có 30 ngày\n", m, y);
                    break;
                }
                default:
                    printf("Tháng không hợp lệ");

            }
            break;
        }
        case 4:
        {
            int N, i, S;
            S=0;
            printf("Hãy nhập số nguyên dương N: "); scanf("%d", &N);
            for (i=1; i<=N; i++)
            S=S+i;
            printf("Tổng của %d số nguyên dương là: %d\n", N, S);
            break;
        }
        case 5:
        {
            int N, i, S;
            S=0; i=1;
            printf("Hãy nhập số nguyên dương N: "); scanf("%d", &N);
            while (i<=N) { i++; S=S+2*i; }
            printf("Tổng của %d số chẵn là: %d\n", N, S);
            break;
        }
        case 6:
        {
            int N, i, S;
            S=0; i=1;
            printf("Hãy nhập số nguyên dương N: "); scanf("%d", &N);
            do {S=S+2*i-1; i++;} while (i<=N); 
            printf("Tổng của %d số lẻ là: %d\n", N, S);
            break;
        }
        default:
            printf("Lựa chọn không hợp lệ");
    }
    return 0;
}
