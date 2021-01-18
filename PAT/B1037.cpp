#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int g[3], s[3], k[3], t, x = 0;
    scanf("%d.%d.%d %d.%d.%d", &g[1], &s[1], &k[1], &g[2], &s[2], &k[2]);
    t = 17 * 29 * (g[2] - g[1]) + 29 * (s[2] - s[1]) + (k[2] - k[1]);
    if (t < 0)
    {
        t *= -1;
        x++;
    }
    g[0] = t / (17 * 29);
    s[0] = (t / 29) % 17;
    k[0] = t % 29;
    if (x != 0)
        printf("-");
    printf("%d.%d.%d", g[0], s[0], k[0]);

    system("pause");
    return 0;
}