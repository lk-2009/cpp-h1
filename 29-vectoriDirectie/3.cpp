#include <iostream>

using namespace std;

int a[1002][1002], lin[4] = {-1, 0, 1, 0}, col[4] = {0, 1, 0, -1};
int n, m, nrd, dir, istart, jstart, flori;

int main()
{

    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
        a[i][0] = -1;
        a[i][m + 1] = -1;
    }
    for (int j = 0; j <= m; j++)
    {
        a[0][j] = -1;
        a[n + 1][j] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> istart >> jstart >> nrd;

    int i = istart;
    int j = jstart;

    while (nrd != 0 || a[i][j] != -1)
    {
        if (a[i][j] == 1)
        {
            flori++;
            a[i][j] = 0;
        }
        cin >> dir;
        i += lin[dir];
        j += col[dir];
        nrd--;
    }

    cout << flori;

    return 0;
}