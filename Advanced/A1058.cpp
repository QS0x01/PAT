#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    long long int g[3], s[3], k[3], t;
    scanf("%lld.%lld.%lld %lld.%lld.%lld", &g[1], &s[1], &k[1], &g[2], &s[2], &k[2]);
    t = 17 * 29 * (g[2] + g[1]) + 29 * (s[2] + s[1]) + (k[2] + k[1]);
    g[0] = t / (17 * 29);
    s[0] = (t / 29) % 17;
    k[0] = t % 29;
    printf("%lld.%lld.%lld", g[0], s[0], k[0]);

    system("pause");
    return 0;
}