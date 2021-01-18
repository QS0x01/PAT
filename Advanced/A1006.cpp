#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    string id[2], time[2] = {"23:59:59", "00:00:00"}, temp[3];
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        cin >> temp[0] >> temp[1] >> temp[2];
        if (temp[1] <= time[0])
        {
            id[0] = temp[0];
            time[0] = temp[1];
        }
        if (temp[2] >= time[1])
        {
            id[1] = temp[0];
            time[1] = temp[2];
        }
    }
    printf("%s %s", id[0].c_str(), id[1].c_str());

    system("pause");
    return 0;
}