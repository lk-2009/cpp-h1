#include <iostream>
using namespace std;

int v1[105],v2[105],m,n,mx,cnt;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>v1[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
         cin>>v2[i];
         if(v2[i]>mx){
            mx=v2[i];
         }
    }
    for (int i = 0; i < n; i++)
    {
        if(v1[i]>mx) cnt++;
    }
    cout<<cnt;
    
    
}