#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cfsut.in");
ofstream fout("cfsut.out");

int n,cn,cf,cnt;
int main(){
    fin>>n;
    cn=n;
    cf=cn/100%10;
    while (n>0)
    {
        if (cf==n%10)
        {
            cnt++;
        }
        n/=10;
        
    }
    fout<<cnt;

    
}