#include <iostream>
using namespace std;

int v[505], n;
bool verified = true;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            verified = false;
            break;
        }
    }
    if (verified == true)
    {
        cout << "DA";
    }
    else
        cout << "NU";
}