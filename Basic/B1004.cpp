#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    string max[2], min[2], temp[2];
    int m[2] = {100, 0}, n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[0] >> temp[1] >> t;
        if (t <= m[0])
        {
            m[0] = t;
            min[0] = temp[0];
            min[1] = temp[1];
        }
        if (t >= m[1])
        {
            m[1] = t;
            max[0] = temp[0];
            max[1] = temp[1];
        }
    }
    cout << max[0] << " " << max[1] << endl;
    cout << min[0] << " " << min[1] << endl;

    system("pause");
    return 0;
}