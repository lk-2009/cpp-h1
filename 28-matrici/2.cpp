#include <iostream>
using namespace std;

int n, aux, s, z;
int main()
{
    
    cin >> n >> z;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    if (z == 1)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i < j && j < n - i + 1)
                    s += a[i][j];
    if (z == 2)
    {
        s = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i < j && j > n - i + 1)
                    s += a[i][j];
    }
    if (z == 3)
    {
        s = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i > j && j > n - i + 1)
                    s += a[i][j];
    }
    if (z == 4)
    {
        s = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i > j && j < n - i + 1)
                    s += a[i][j];
    }
    cout << s;
}
