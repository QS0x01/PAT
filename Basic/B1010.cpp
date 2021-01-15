#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    int a, b, x = 0;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (b != 0)
        {
            if (x != 0)
                printf(" ");
            printf("%d %d", a * b, b - 1);
            x++;
        }
    }
    if (x == 0)
        printf("0 0");

    system("pause");
    return 0;
}