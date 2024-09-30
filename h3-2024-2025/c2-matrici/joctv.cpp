#include <fstream>
#include <climits>
using namespace std;

ifstream cin("joctv.in");
ofstream cout("joctv.out");
const int Nmax = 105;
int m[Nmax][Nmax], n, s[Nmax];

//sol in O(n^3);

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin>>x;
            m[i][j]=m[i-1][j]+x;
        }
    }

    int sol=0;

    for (int i1 = 1; i1 <= n; i1++)
    {
        for (int i2 = 1; i2 <= n; i2++)
        {
            //alg lui kadane
            int sum=0;
            for (int j = 1; j <= n; j++)
            {
                 sum+=m[i2][j] - m[i1-1][j];
                 sol=max(sol,s[j]);
                 if (sum<0)
                 {
                    sum=0;
                 }
                 
            }
            
        }
    }
}