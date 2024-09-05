#include <iostream>
using namespace std;

int n,v[1005],mn=INT16_MAX;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]<mn){
            mn=v[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
         cout<<v[i]<<" ";
         if(v[i]==mn) cout<<v[i]<<" ";
    }
    
    
}