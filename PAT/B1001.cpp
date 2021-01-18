#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, m = 0;
    scanf("%d", &n);
    while (n != 1)
    {
        m++;
        n = (n % 2 == 0) ? n / 2 : (3 * n + 1) / 2;
    }
    printf("%d", m);

    system("pause");
    return 0;
}