#include <fstream>
#include <unordered_map>

//(key , value) pairs
// suma partiala (key=indice) => frecvnta ei (valoare)

using namespace std;
const int Nmax = 1000005;
int sum, n;
long long sol;
unordered_map<int, int> fr;
int main()
{
    ifstream cin("secv011.in");
    ofstream cout("secv011.out");
    cin >> n;
    fr[0]++;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            x = -2;
        }
        sum += x;
        fr[sum]++;
    }
    for (int val = -2 * n; val <= n; val++)
    {
        if (fr.count(val) > 0)
            sol += fr[val] * fr[val - 1] / 2LL;
    }
    cout << sol << '\n';
}