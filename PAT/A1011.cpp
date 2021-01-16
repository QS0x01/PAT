#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    char c[] = "WTL";
    double a[3], ans = 1;
    for (int i = 0; i < 3; i++)
    {
        int max = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf", &a[j]);
            if (a[j] >= a[max])
            {
                max = j;
            }
        }
        ans *= a[max];
        printf("%c ", c[max]);
    }
    printf("%.2f", (ans * 0.65 - 1) * 2);

    system("pause");
    return 0;
}