#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    string u;
    cin >> u;
    int n = u.length();
    int m = (n - 1) / 3;
    int k = n - 2 * m;
    for (int i = 0; i < m; i++)
    {
        printf("%c", u[i]);
        for (int j = 0; j < k - 2; j++)
        {
            printf(" ");
        }
        printf("%c\n", u[n - i - 1]);
    }
    for (int i = 0; i < k; i++)
    {
        printf("%c", u[m + i]);
    }

    system("pause");
    return 0;
}