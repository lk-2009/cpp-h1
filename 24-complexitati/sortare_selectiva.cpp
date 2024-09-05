#include <iostream>
using namespace std;

int n,mini,pmin,aux,v[10005];
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        mini=v[i];
        pmin=i;
        for (int j = i+1; j < n; j++)
        {
             if (v[j]<mini)
             {
                mini=v[j];
                pmin=j;
             }
             swap(v[i],v[pmin]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    
}