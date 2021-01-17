#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, t, p = 1, a[5][2] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        switch (t % 5)
        {
        case 0:
            if (t % 2 == 0)
            {
                a[0][0] += t;
                a[0][1]++;
            }
            break;
        case 1:
            a[1][0] += t * p;
            a[1][1]++;
            p *= -1;
            break;
        case 2:
            a[2][0] = ++a[2][1];
            break;
        case 3:
            a[3][0] += t;
            a[3][1]++;
            break;
        case 4:
            if (t > a[4][0])
            {
                a[4][0] = t;
                a[4][1]++;
            }
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            if (a[3][1] != 0)
                printf("%.1f ", (double)a[3][0] / a[3][1]);
            else
                printf("N ");
        }
        else
        {
            if (a[i][1] == 0)
                printf("N");
            else
                printf("%d", a[i][0]);
            if (i != 4)
                printf(" ");
        }
    }

    system("pause");
    return 0;
}