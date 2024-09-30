#include <iostream>

using namespace std;
int n,v[101][101],a;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=n-i+2;j<=n;j++){
            a=v[i][j];
            v[i][j]=v[n-j+1][n-i+1];
            v[n-j+1][n-i+1]=a;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
