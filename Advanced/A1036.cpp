#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    string max, min, name, id;
    char c, F = 'F', M = 'M';
    int n, maxf = -1, minm = 101, m, k = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        scanf(" %c ", &c);
        cin >> id >> m;
        if (c == M && m <= minm)
        {
            min = name + " " + id;
            minm = m;
        }
        if (c == F && m >= maxf)
        {
            max = name + " " + id;
            maxf = m;
        }
    }
    if (maxf == -1)
    {
        printf("Absent\n");
        k++;
    }
    else
    {
        printf("%s\n", max.c_str());
    }
    if (minm == 101)
    {
        printf("Absent\n");
        k++;
    }
    else
    {
        printf("%s\n", min.c_str());
    }
    if (k == 0)
    {
        printf("%d", maxf - minm);
    }
    else
    {
        printf("NA");
    }

    system("pause");
    return 0;
}