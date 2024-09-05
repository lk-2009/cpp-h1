#include <iostream>
using namespace std;
int n, aux;
int main()
{

    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= i - 1; j++)
        {
            aux = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = aux;
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}