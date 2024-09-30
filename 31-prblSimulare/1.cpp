#include <iostream>
using namespace std;
int n, i, j, lat, dir, k;
int lin[4] = {1, 0, -1, 0};
int col[4] = {0, -1, 0, 1};
int main()
{

    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << a[n / 2][n / 2] << " ";
    i = n / 2;
    j = n / 2;
    for (int lat = 2; lat < n; lat += 2)
    {
        i = i - 1;
        j = j + 1;
        for (int dir = 0; dir < 4; dir++)
        {
            for (int k = 0; k < lat; k++)
            {
                i += lin[dir];
                j += col[dir];
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}
