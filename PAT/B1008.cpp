#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int k = i - m;
        while (k < 0)
        {
            k += n;
        }
        printf("%d", a[k]);
        printf(i < n - 1 ? " " : "\n");
    }

    system("pause");
    return 0;
}