#include <fstream>
using namespace std;

ifstream cin("2lan.in");
ofstream cout("2lan.out");

int n;
int Last_digit(int n)
{
    if (n != 0)
    {
        if (n % 4 == 0)
            return 6;
        if (n % 4 == 1)
            return 2;
        if (n % 4 == 2)
            return 4;
        if (n % 4 == 3)
            return 8;
    }
    return 1;
};
int main()
{
    cin >> n;
    cout << Last_digit(n);
}