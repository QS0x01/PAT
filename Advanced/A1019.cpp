#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, b, s[32], m = -1, k = 0;
    scanf("%d %d", &n, &b);
    do
    {
        s[++m] = n % b;
        n /= b;
    } while (n != 0);
    for (int i = 0; i <= m - i; i++)
    {
        if (s[i] != s[m - i])
        {
            k++;
            break;
        }
    }
    printf(k == 0 ? "Yes" : "No");
    for (int i = m; i >= 0; i--)
    {
        printf(i == m ? "\n" : " ");
        printf("%d", s[i]);
    }

    system("pause");
    return 0;
}