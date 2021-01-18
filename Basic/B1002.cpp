#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    string s, num, o[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    num = to_string(sum);
    for (int i = 0; i < num.length(); i++)
    {
        if (i != 0)
            printf(" ");
        printf("%s", o[num[i] - '0'].c_str());
    }

    system("pause");
    return 0;
}