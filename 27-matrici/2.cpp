#include <iostream>
using namespace std;

int a[100][100],n,m;
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
             cout<<a[i][j]<<" ";
        }
        cout<<'\n';
        
    }
    
    
}