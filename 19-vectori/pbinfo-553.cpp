#include <iostream>
using namespace std;

int v[1005],n,mx=-1,mn=INT16_MAX,imax,imin;
int main(){
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i <= n; i++)
    {
         if(v[i]>mx){
            mx=v[i];
            imax=i;
         }
         if(v[i]<mn){
            mn=v[i];
            imin=i;
         }
    }
    cout<<imin<<" "<<imax;
    
    
}