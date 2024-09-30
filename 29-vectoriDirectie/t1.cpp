#include <iostream>
using namespace std;

int a[1005][1005], lin[4] = {-1, 0, 1, 0}, col[4] = {0, 1, 0, -1};
int m, n, nrd, dir, istart, jstart, flori;
int main()
{
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        a[i][0] = -1;
        a[i][m + 1] = -1;
    }
    for (int i = 0; i <= m; i++)
    {
        a[0][i] = -1;
        a[n + 1][i] = -1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin>>istart>>jstart>>nrd;
    while (nrd !=0 || a[istart][jstart] !=-1)
    {
        if (a[istart][jstart]==1)
        {
            flori++;
            a[istart][jstart]=0;
        }
        cin>>dir;
        istart+=lin[dir];
        jstart+=col[dir];
        
    }
    
}