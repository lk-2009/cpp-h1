#include <iostream>
using namespace std;

int n,a[30][30];
int main(){
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             a[i][j]=(i*j)%10;
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }

    
}