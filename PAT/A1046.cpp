#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int dis[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dis[i]);
        sum += dis[i];
        dis[i] = sum - dis[i];
    }
    int m, x, y, z;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
            swap(x, y);
        z = dis[y - 1] - dis[x - 1];
        printf("%d\n", min(z, sum - z));
    }

    system("pause");
    return 0;
}