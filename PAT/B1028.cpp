#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    string maxn, minn, maxb = "1814/09/06", minb = "2014/09/06", tempn, tempb;
    int n, m = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> tempn >> tempb;
        if (tempb >= "1814/09/06" && tempb <= "2014/09/06")
        {
            m++;
            if (tempb >= maxb)
            {
                maxn = tempn;
                maxb = tempb;
            }
            if (tempb <= minb)
            {
                minn = tempn;
                minb = tempb;
            }
        }
    }
    printf("%d", m);
    if (m != 0)
        printf(" %s %s", minn.c_str(), maxn.c_str());

    system("pause");
    return 0;
}