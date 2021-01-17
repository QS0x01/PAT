#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int c1, c2;
    scanf("%d %d", &c1, &c2);
    int t = (c2 - c1 + 50) / 100;
    printf("%02d:%02d:%02d\n", t / 3600, t % 3600 / 60, t % 60);

    system("pause");
    return 0;
}