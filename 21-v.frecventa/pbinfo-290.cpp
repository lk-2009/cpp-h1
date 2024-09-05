#include <iostream>
using namespace std;

int n, v[105],cnt,x;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%2==0){
            v[cnt++]=x;
        }
    }
    for (int i = 0; i < cnt-1; i++)
    {
        if(v[i]>v[i+1]){
            cout<<"NU";
            return 0;
        }
    }
    cout<<"DA";
    
    
}