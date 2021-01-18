#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, m;
    char c;
    scanf("%d %c", &n, &c);
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
    m = (n + 1) / 2;
    printf("\n");
    for (int i = 0; i < m - 2; i++)
    {
        printf("%c", c);
        for (int j = 0; j < n - 2; j++)
        {
            printf(" ");
        }
        printf("%c\n", c);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }

    system("pause");
    return 0;
}