#include <iostream>
using namespace std;

int a[105], b[105], frq2[105], m, n;
bool found;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        frq2[b[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (frq2[a[i]] == 1)
        {
            cout << a[i] << " ";
            found=true;
        }
    }
    if(found==false) cout<<"multimea vida";
}