#include <iostream>
using namespace std;

int v[100],n,x;

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==x){
            cout<<i;
            return 0;
        }
    }
    cout<<n;
    
}