#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int a, b, c, n;
    scanf("%d", &n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    for (int i = 0; i < a; i++)
    {
        printf("B");
    }
    for (int i = 0; i < b; i++)
    {
        printf("S");
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d", i + 1);
    }

    system("pause");
    return 0;
}