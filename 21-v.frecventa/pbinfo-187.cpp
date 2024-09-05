#include <fstream>
#include <math.h>
#include <algorithm>
using namespace std;

ifstream cin("ciffrecv.in");
ofstream cout("ciffrecv.out");

int n,f[11],x;
bool prime(int n){
    
    for (int i = 2; i <= sqrt(n); i++)
    {
         if(n%i==0) return 0;
    }
    return 1;
    
}
int main(){
    while(cin>>x)
    {
        f[x]++;

    }
    for (int i = 9; i >= 0; i--)
    {
         if(prime(i)==1 && f[i]!=0){
            cout<<i<<" "<<f[i];
            return 0;
         }
    }
    
    
}