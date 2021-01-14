#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    int n, a[3], b[3];
    scanf("%d", &n);
    a[2] = b[2] = 0;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        scanf("%d %d %d %d", &a[0], &a[1], &b[0], &b[1]);
        if (a[0] + b[0] == a[1])
        {
            k++;
        }
        if (a[0] + b[0] == b[1])
        {
            k--;
        }
        if (k == 1)
        {
            b[2]++;
        }
        if (k == -1)
        {
            a[2]++;
        }
    }
    printf("%d %d", a[2], b[2]);

    system("pause");
    return 0;
}