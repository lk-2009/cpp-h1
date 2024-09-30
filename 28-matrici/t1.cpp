#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("spirala.in");
ofstream fout("spirala.out");
long long n, v[24][24], k;
int main()
{
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            fin >> v[i][j];
        }
    }
    while (k < n / 2)
    {
        for (int j = k + 1; j <= n - k - 1; j++)
        {
            fout << v[k + 1][j] << " ";
        }
        for (int i = k + 1; i <= n - k - 1; i++)
        {
            fout << v[i][n - k] << " ";
        }
        for (int j = n - k; j > k + 1; j--)
        {
            fout << v[n - k][j] << " ";
        }
        for (int i = n - k; i > k + 1; i--)
        {
            fout << v[i][k + 1] << " ";
        }
        k++;
    }
    if (n % 2 == 1)
    {
        fout << v[n / 2 + 1][n / 2 + 1];
    }
}
