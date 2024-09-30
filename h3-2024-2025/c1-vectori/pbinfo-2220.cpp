#include <iostream>
using namespace std;


// 1sec=200.000.000 operatii
// include  <climits> ca sa folosesc INT_MAX/MIN;
// 1 mil intregi->>4 mb;

const int nmax = 100005;
int n, mx[nmax], a[nmax];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mx[1]=a[1];
    for (int i = 0; i < n; i++)
    {
        mx[i] = max(mx[i - 1], a[i]);
    }
    int sol= -2000000000;
    for (int i = 0; i < n; i++)
    {
         sol=max(sol,mx[i-1]-a[i]);
    }
    cout<<sol;

}