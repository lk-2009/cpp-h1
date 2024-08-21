#include <iostream>
using namespace std;

int m,n,a[1005],b[1005],ok,sol;

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n-m; i++)
    {
        int cnt=0;
         for (int j = i; j < i+m; j++)
         {
             if(a[j]==b[j-i]){
                cnt++;
             }
         }
         if(cnt==m && ok==0){
            sol=i+1;
            ok++;
         }
         
    }
    if(ok==0) cout<<"NU";
    else cout <<sol;
    

    
    
}