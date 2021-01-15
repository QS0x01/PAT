#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int num(string s, int d)
{
    int p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - '0' == d)
            p = p * 10 + d;
    }
    return p;
}

int main()
{
    string a, b;
    int da, db, pa, pb;
    cin >> a >> da >> b >> db;
    pa = num(a, da);
    pb = num(b, db);
    printf("%d", pa + pb);

    system("pause");
    return 0;
}
