#include <iostream>
using namespace std;

int n,f[105],cnt,x;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        f[x]++;
    }
    for (int i = 0; i < 101; i++)
    {
        //cout<<f[i]<<" ";
         while(f[i]>1){
            f[i]/=2;
            cnt++;
         }
    }
    cout<<cnt;
    
    
}