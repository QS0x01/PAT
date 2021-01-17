#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int k1, k2, t, n = 0;
    scanf("%d", &k1);
    int ind[k1];
    double inf[k1], out[2002] = {0};
    for (int i = 0; i < k1; i++)
    {
        scanf("%d%lf", &ind[i], &inf[i]);
    }
    scanf("%d", &k2);
    for (int i = 0; i < k2; i++)
    {
        scanf("%d%lf", &t, &out[2001]);
        for (int i = 0; i < k1; i++)
        {
            if (out[ind[i] + t] == 0)
                n++;
            out[ind[i] + t] += out[2001] * inf[i];
            if (out[ind[i] + t] == 0)
                n--;
        }
    }
    printf("%d", n);
    for (int i = 2000; i >= 0; i--)
    {
        if (out[i] != 0)
            printf(" %d %.1f", i, out[i]);
    }

    system("pause");
    return 0;
}