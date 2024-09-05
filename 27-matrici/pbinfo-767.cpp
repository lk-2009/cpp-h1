#include <iostream>
using namespace std;

int a[100][100], n, m, S;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] % 2 == 0)
                S += a[i][j];
        }
    }
    cout<<S;
}