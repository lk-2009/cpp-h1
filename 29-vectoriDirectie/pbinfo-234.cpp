#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int a[21][21];
int n, nrSubDiag;
float s;
ifstream fin("medpoz.in");
ofstream fout("medpoz.out");
int main()
{

    fin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i && a[i][j] > 0)
            {
                s += a[i][j];
                nrSubDiag++;
            }
        }
    }
    if (nrSubDiag == 0)
    {
        fout << "NU EXISTA";
    }
    else
    {
        fout << fixed << setprecision(3) << s / nrSubDiag;
    }
    return 0;
}
