#include <iostream>
using namespace std;
int n, v[32];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[n + i] = v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < i + n; ++j)
            cout << v[j] << " ";
        cout << endl;
    }
}