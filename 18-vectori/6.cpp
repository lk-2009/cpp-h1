#include <iostream>
using namespace std;

int v[205],n,s;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i]%2==0)
        {
            s+=v[i];
        }
        
    }
    cout<<s;
    
    
}