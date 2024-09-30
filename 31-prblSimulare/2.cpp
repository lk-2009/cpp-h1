#include <iostream>
using namespace std;
int lin[5] = {0, 0, 1, 2, -1};
int col[5] = {0, 1, 0, -1, 2};
int n, i, j, x, dir, diag;
int a[1002][1002];
int main()
{
    
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        a[i][0] = 1;
    }
    for (int j = 1; j <= n; j++)
    {
        a[0][j] = 2;
    }
    for (int i = 0; i <= n + 1; i++)
    {
        a[i][n + 1] = 3;
    }
    for (int j = 0; j <= n; j++)
    {
        a[n + 1][j] = 4;
    }
    i = j = 1;
    diag = -1;
    x = 1;
    while (x <= n * n)
    {
        if (a[i][j] != 0)
        {
            dir = a[i][j];
            i += lin[dir];
            j += col[dir];
            diag = -diag;
        }
        a[i][j] = x;
        x++;
        i += diag;
        j -= diag;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
