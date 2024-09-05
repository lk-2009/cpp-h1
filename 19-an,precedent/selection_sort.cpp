#include <iostream>
using namespace std;

int n,v[200],mn,pmn;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        mn=v[i];
        pmn=i;
        for (int j = i+1; j < n; j++)
        {
             if(v[j]<mn){
                mn=v[j];
                pmn=j;
             }
        }
        v[pmn]=v[i];
        v[i]=mn;
        
    }
    
    
}