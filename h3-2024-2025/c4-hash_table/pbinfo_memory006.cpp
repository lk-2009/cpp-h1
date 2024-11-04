#include <fstream>
#include <queue>
using namespace std;

ifstream cin("memory006.in");
ofstream cout("memory006.out");

int logOf(long long val)
{
    int expo = 0;
    while ((val & 1) == 0)
    {
        val /= 2;
        expo++;
    }
    return val == 1 ? expo : -1;
    // if(val != 1) return -1;
    // return expo;
}
long long sum;
int n, k, i, j, sol;
queue<int, int> Q;
int main()
{
    cin >> n >> k;
    for (int j = 1; j <= n; j++)
    {
        long long val;
        cin >> val;
        int x = logOf(val);
        if (x == -1)
        {
            i = j + 1;
            sum = 0;
            while (!Q.empty())
            {
                Q.pop();
            }
        }
        else
        {

            Q.push(x);
            while (sum > k)
            {
                i++;
                sum -= Q.front();
                Q.pop();
            }
            if (sum == k)
                sol++;
        }
    }
    cout << sol;
}