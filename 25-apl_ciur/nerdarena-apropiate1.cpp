#include <iostream>
using namespace std;

bool ciur[40005];
int n, c, x, cnt1, cnt2;
int main()
{
    for (int i = 2; i * i < 100005; i++)
    {

        if (ciur[i] == 0)
        {

            for (int j = i * i; j < 100005; j = j + i)
            {
                ciur[j] = 1;
            }
        }
    }
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (ciur[x] == 0)
            cout << x << " ";
        else
        {
            cnt1 = x - 1;
            while (cnt1 >= 2 && ciur[cnt1] == 1)
            {
                cnt1--;
            }
            cnt2 = x + 1;
            while (cnt2 <= 40000 && ciur[cnt2] == 1)
            {
                cnt2++;
            }
            if ((x - cnt1 < cnt2 - x) || (x - cnt1 == cnt2 - x && c == 1))
            {
                cout << cnt1 << " ";
            }
            else
                cout << cnt2 << " ";
        }
    }
}