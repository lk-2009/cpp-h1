#include <iostream>
using namespace std;

int n,aux,mini,p;
bool ok;
int main(){
    cin>>n;
    int a[n+1][n+1];
    p=1;
    ok=true;
    for (int j = 0; j <= n; j++)
    {
        mini=10000;
        for (int i = 1; i <= n; i++)
        {
             cin>>a[i][j];
             if (a[i][j]<mini)
             {
                mini=a[i][j];
             }
             if (i+j==n+1 && mini==a[i][j])
             {
                 p*=a[i][j];
                 ok=false;
             }
             
             
        }
        
    }
    if (ok==true)
    {
        cout<<"NU EXISTA";
    }else cout<<p%10;
    
    
    
}