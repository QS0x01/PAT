#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

struct PAT
{
    long long id;
    int sj, zw;
};

int main()
{
    int l, n, m;
    scanf("%d", &n);
    PAT pat[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d", &pat[i].id, &pat[i].sj, &pat[i].zw);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &l);
        for (int j = 0; j < n; j++)
        {
            if (pat[j].sj == l)
            {
                printf("%lld %d\n", pat[j].id, pat[j].zw);
                break;
            }
        }
    }

    system("pause");
    return 0;
}