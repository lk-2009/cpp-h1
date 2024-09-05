#include <iostream>
using namespace std;
 int n, i, j, S;
int main()
{
   
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    j = 1;
    for (int i = 0; i < n - 1; i++)
    {
        S += a[i][j];
        j++;
    }
    j = 0;
    for (int i = 1; i < n; i++)
    {
        S += a[i][j];
        j++;
    }
    cout << S;
    return 0;
}
