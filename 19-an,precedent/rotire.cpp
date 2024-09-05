#include <iostream>
using namespace std;

int n,v[20];
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>n;

    }
    int i=0;
    while(i<n){
        int ult=v[n-1];
        for (int j = n-1; j > 0; j--)
        {
             v[j]=v[j-1];
        }
        v[0]=ult;
        i++;
        for (int j = 0; j < n; j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
        
    }
    
}