#include <iostream>
using namespace std;

int n,x,f[90],cnt;

int sumCif(int n){
    int cn=n;
    int sum=0;
    while(cn>0){
        sum+=cn%10;
        cn/=10;
    }
    return sum;
};

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        f[sumCif(x)]++;    
       // cout<<sumCif(x)<<" ";
    }
    for (int i = 0; i < 90; i++)
    {
        if(f[i]>=2) cnt+=(f[i]*(f[i]-1)/2);
    }
    cout<<cnt;
    
    
}