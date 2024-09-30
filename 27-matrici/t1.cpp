#include <iostream>
using namespace std;


int m,n,a[10000][1000], S;
int main(){

    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        S=0;
        for (int j = 0; j < m; j++)
        {
             cin>>a[i][j];
             S+=a[i][j];
        }
        cout<<S<<" ";
        
    }
    
}