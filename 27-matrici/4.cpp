#include <iostream>
using namespace std;

int a[101][101], n, mx, mn = INT16_MAX;
int max_value(int a[101][101])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
        }
    }
    return mx;
}
int min_value(int a[101][101])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < mn)
            {
                mn = a[i][j];
            }
        }
    }
    return mn;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    mx = max_value(a);
    mn = min_value(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == mx)
            {
                a[i][n] = 1;
                continue;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][n] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j]+=mn;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
    }
}