#include <iostream>
using namespace std;

int v[105], n;
bool verified;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    verified = true;
    for (int i = 0; i <= n-1; i++)
    {
        if (v[i] % v[n-1] != 0)
        {
            verified = false;
            break;
        }
    }
    if (verified == true)
    {
        cout << "DA";
    }else cout << "NU";
}