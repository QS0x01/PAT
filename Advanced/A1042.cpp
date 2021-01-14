#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    int x = 0, n, s, a[3][54];
    scanf("%d", &n);
    for (int i = 0; i < 54; i++)
    {
        scanf("%d", &s);
        a[2][i] = s - 1;
        a[0][i] = a[1][i] = i;
    }
    while (n > 0)
    {
        x = (x + 1) % 2;
        for (int i = 0; i < 54; i++)
        {
            a[x][a[2][i]] = a[1 - x][i];
        }
        n--;
    }
    char c[] = "SHCDJ";
    for (int i = 0; i < 54; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        printf("%c%d", c[(a[x][i]) / 13], a[x][i] % 13 + 1);
    }

    system("pause");
    return 0;
}