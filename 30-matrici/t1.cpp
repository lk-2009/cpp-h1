#include <iostream>
using namespace std;
int lin[4] = {-1, 0, 1, 0};
int col[4] = {0, 1, 0, -1};
int m, n, l, c;
int dir;
int main()
{
    
    cin >> m >> n;
    int a[m + 2][m + 2];
    for (int i = 0; i <= m + 1; i++)
    {
        a[i][0] = -1;
        a[0][i] = -1;
        a[m + 1][i] = -1;
        a[i][m + 1] = -1;
    }
    for (int i = 1; i <= m; i++)
    {
        a[i][1] = n;
        a[1][i] = n;
        n++;
    }
    for (int i = 2; i <= m; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
            if (a[i][j] > 999)
            {
                a[i][j] = a[i][j] % 1000;
            }
        }
    }
    
    cout << a[m][m] << endl;
    cin >> l >> c;
    while (a[l][c] != -1)
    {
        cout << l << ' ' << c << '\n';
        dir = a[l][c] % 4;
        a[l][c] = -1;
        l += lin[dir];
        c += col[dir];
    }
    return 0;
}
