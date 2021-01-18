#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, id, sc;
    scanf("%d", &n);
    int a[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &id, &sc);
        a[id] += sc;
        if (a[id] >= a[a[0]])
            a[0] = id;
    }
    printf("%d %d", a[0], a[a[0]]);

    system("pause");
    return 0;
}