#include <iostream>
using namespace std;
int n, m, i, j, x, y, s, ok, smin, imin, jmin;
int lin[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, 1, -1};
int main()
{

    cin >> n >> m;
    int a[n + 2][m + 2];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i <= n + 1; i++)
    {
        a[i][0] = a[i][m + 1] = -100;
    }
    for (j = 0; j <= m + 1; j++)
    {
        a[0][j] = a[n + 1][j] = -100;
    }
    smin = 10000;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (a[i][j] < 0)
            {
                for (int dir = 0; dir < 4; dir++)
                {
                    x = i + lin[dir];
                    y = j + col[dir];
                    s = 0;
                    ok = 1;
                    while (a[x][y] != -100)
                    {
                        s += a[x][y];
                        if (a[x][y] < 0)
                            ok = 0;
                        x += lin[dir];
                        y += col[dir];
                    }
                    if (s < smin && ok == 1)
                    {
                        smin = s;
                        imin = i;
                        jmin = j;
                    }
                }
            }
        }
    }
    cout << imin << " " << jmin << " " << smin;
    return 0;
}
