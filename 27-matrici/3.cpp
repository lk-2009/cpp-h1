#include <iostream>
using namespace std;

int a[100][100],n;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i][i]<<" ";
    }
    cout<<'\n';
    for (int i = n; i > 0; i--)
    {
         cout<<a[i][i]<<" ";
    }
    
    
    
}