#include <iostream>
using namespace std;
int lin[4] = {-1, 1, 1, -1};
int col[4] = {1, 1, -1, -1};
int n, m, i, j, l, c, nrp, nrpmax, imax, jmax;
int main()
{
    
    cin >> n >> m;
    int a[n + 2][m + 2];
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> a[i][j];

    for (i = 0; i <= n + 1; i++)
        a[i][0] = a[i][m + 1] = -1;

    for (j = 0; j <= m + 1; j++)
        a[0][j] = a[n + 1][j] = -1;

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
        {
            if (a[i][j] == 0)
            {
                nrp = 0;
                for (int dir = 0; dir < 4; dir++)
                {
                    l = i;
                    c = j;
                    while (a[l][c] != -1)
                    {
                        nrp += a[l][c];
                        l += lin[dir];
                        c += col[dir];
                    }
                }
                if (nrp > nrpmax)
                {
                    nrpmax = nrp;
                    imax = i;
                    jmax = j;
                }
            }
        }
    cout << imax << ' ' << jmax << ' ' << nrpmax;
}
