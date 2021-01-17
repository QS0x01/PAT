#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, m;
    char c;
    scanf("%d %c", &n, &c);
    m = (int)sqrt((n + 1) / 2.0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * m - 1 - 2 * i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * m - 1 - 2 * i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    printf("%d", n - 2 * m * m + 1);

    system("pause");
    return 0;
}