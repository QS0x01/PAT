#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int a, b, c, d, s[32], w = -1;
    scanf("%d %d %d", &a, &b, &d);
    c = a + b;
    do
    {
        s[++w] = c % d;
        c /= d;
    } while (c != 0);
    for (int i = w; i >= 0; i--)
    {
        printf("%d", s[i]);
    }

    system("pause");
    return 0;
}