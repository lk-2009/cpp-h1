#include <iostream>
#include <cmath>
using namespace std;

int n, p, mx, cn, pow_max;
int main()
{
    cin >> n;
    cn = n;
    for (int i = 2; i <= sqrt(cn); i++)
    {
        while (n % i == 0)
        {
            p++;
            n /= i;
        }
        if (p >= mx)
        {
            mx = p;
            pow_max = i;
        }
        
        p = 0;
    }
    if(n!=1) p=1;
    if(p>=mx) cout<<n;
    else cout<<pow_max;
}