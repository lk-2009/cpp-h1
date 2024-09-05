#include <iostream>
using namespace std;

int  n,ciur[1000];
int main(){
    cin>>n;
    //cout<<n;
     
    for (int i = 2; i < n; i++)
    {
         if(ciur[i]==0) cout<<i<<" ";
    }
    
    
}