#include <fstream>
using namespace std;

ifstream cin("nrlipsa2.in");
ofstream cout("nrlipsa2.out");

int n, f[205];
int main()
{
    while (cin >> n)
    {
        if(-100<=n && n<=100)
            f[n + 100]++;
    }
    for (int i = 0; i < 200; i++)
    {
        if (f[i] == 0)
        {
            cout << i - 100;
            return 0;
        }
    }
    cout << "nu exista";
}