#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    char c[] = "0123456789ABC";
    int a;
    printf("#");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        printf("%c%c", c[a / 13], c[a % 13]);
    }

    system("pause");
    return 0;
}