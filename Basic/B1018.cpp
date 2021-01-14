#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

void bcj(char aa, char bb, int a[], int b[])
{
    if (aa == bb)
    {
        a[2]++;
        b[2]++;
    }
    else if (aa == 'B' && bb == 'C' || aa == 'C' && bb == 'J' || aa == 'J' && bb == 'B')
    {
        a[1]++;
        b[3]++;
        switch (aa)
        {
        case 'B':
            a[4]++;
            break;
        case 'C':
            a[5]++;
            break;
        case 'J':
            a[6]++;
            break;
        }
    }
    else
    {
        bcj(bb, aa, b, a);
    }
    return;
}

char print(int a[])
{
    char c;
    if (a[4] >= a[5] && a[4] >= a[6])
        c = 'B';
    else if (a[5] >= a[4] && a[5] >= a[6])
        c = 'C';
    else
        c = 'J';
    return c;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[7] = {0}, b[7] = {0};
    char aa, bb;

    for (int i = 0; i < n; i++)
    {
        getchar();
        scanf("%c %c", &aa, &bb);
        bcj(aa, bb, a, b);
    }

    printf("%d %d %d\n", a[1], a[2], a[3]);
    printf("%d %d %d\n", b[1], b[2], b[3]);
    printf("%c %c", print(a), print(b));

    system("pause");
    return 0;
}