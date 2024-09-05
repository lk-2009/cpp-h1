#include <iostream>
using namespace std;
int a[22][22];
int lin[4] = {-1, 0, 1, 0};
int col[4] = {0, 1, 0, -1};
int n, cnt, l, c, nr;

int main()
{
    
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i <= n + 1; i++)
    {
        a[i][0] = a[0][i] = a[n + 1][i] = a[i][n + 1] = -1;
    }
    nr = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cnt = 0;
            for (int dir = 0; dir <= 3; dir++)
            {
                l = i + lin[dir];
                c = j + col[dir];
                if (a[i][j] > a[l][c])
                {
                    cnt++;
                }
            }
            if (cnt == 4)
            {
                nr++;
            }
        }
    }
    /*for (i = 0; i <= n+1; i++) {
    for (j = 0; j <= n+1; j++) {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }*/
    cout << nr;
    return 0;
}
