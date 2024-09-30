#include <iostream>
using namespace std;


int i, j, a, b, p, y, s, cnt, mini, maxi, x;
bool c[100000];
int main()
{

    c[0] = 1;
    c[1] = 1;
    for (i = 2; i * i <= 100000; i++)
    {
        if (c[i] == 0)
        {
            for (j = i * i; j <= 100000; j = j + i)
            {
                c[j] = 1;
            }
        }
    }

    cin >> a >> b;
    cnt = 0;
    mini = b;
    maxi = a;
    for (x = a; x <= b; x++)
    {
        if (c[x] == 0)
        { 
            p = 1;
            s = 0;
            while (p < x)
            {
                y = x / (p * 10) * p + x % p;
                s += c[y];
                p *= 10;
            }
            if (s == 0)
            { 
                cnt++;
                if (cnt == 1)
                {
                    mini = x;
                }
                maxi = x;
            }
        }
    }
    cout << cnt << endl << mini << endl << maxi;
}
