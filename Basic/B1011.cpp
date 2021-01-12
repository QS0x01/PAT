#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    int t;
    long long a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        a + b > c ? printf("Case #%d: true\n", i + 1) : printf("Case #%d: false\n", i + 1);
    }

    system("pause");
    return 0;
}