#include <iostream>
#include <math.h>
using namespace std;

int n,k,fact,ci,num_app;
int main(){
    cin>>n>>k;
    for (int i = k; i <= n; i+=k)
    {
        fact=0;
        ci=i;
        while(ci%k==0){
            fact++;
            ci/=k;
        }
        num_app+=fact;

    }
    cout<<num_app;
    
}