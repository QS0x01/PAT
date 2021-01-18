#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

double a[1002] = {0};
int k, t, n = 0;

void poly()
{
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d%lf", &t, &a[1001]);
        if (a[t] == 0)
            n++;
        a[t] += a[1001];
        if (a[t] == 0)
            n--;
    }
    return;
}

int main()
{
    poly();
    poly();
    printf("%d", n);
    for (int i = 1000; i >= 0; i--)
    {
        if (a[i] != 0)
            printf(" %d %.1f", i, a[i]);
    }

    system("pause");
    return 0;
}