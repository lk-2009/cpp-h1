#include <iostream>
#include <algorithm>
using namespace std;

int n, v[100];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
         cout<<v[i]<<" ";
    }
    
}