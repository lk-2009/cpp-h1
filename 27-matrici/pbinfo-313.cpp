#include <iostream>
using namespace std;
int n, m, a[22][22], s1, s2;
int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                s1 = s1 + a[i][j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i + j == n + 1)
                s2 = s2 + a[i][j];
        }
    if (s1 > s2)
        cout << s1 - s2;
    else
        cout << s2 - s1;

}