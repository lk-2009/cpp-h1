#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("kdiv.in");
ofstream fout("kdiv.out");

int nrdiv[1000001];

int main()
{
    int n,i,j,cnt = 0,k,x;

    nrdiv[0] = 1;
    nrdiv[1] = 1;

    for (i = 2; i <= 1000000; i++) {
        if (nrdiv[i] == 0) {
            for (j = i; j <= 1000000; j += i) {
                nrdiv[j]++;
            }
        }
    }

    fin>>n>>k;

    for (i = 0; i < n; i++) {
        fin>>x;
        if (nrdiv[x] == k) {
            cnt++;
        }
    }

    fout<<cnt;

    return 0;
}
