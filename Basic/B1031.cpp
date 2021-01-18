#include <bits/stdc++.h>
#define QS0x01 Kami
using namespace std;

int main()
{
    int n, z, x = 0;
    int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    string id, b = "10X98765432";
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        z = 0;
        cin >> id;
        for (int j = 0; j < 17; j++)
        {
            z += (id[j] - '0') * a[j];
        }
        z %= 11;
        if (b[z] != id[17])
        {
            x++;
            printf("%s\n", id.c_str());
        }
    }
    if (x == 0)
        printf("All passed");

    system("pause");
    return 0;
}