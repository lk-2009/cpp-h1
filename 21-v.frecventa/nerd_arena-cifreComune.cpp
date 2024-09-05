#include <iostream>
using namespace std;

int a,b,f1[11],f2[11],cnt;
int main(){
    cin>>a>>b;
    while(a>0){
        f1[a%10]++;
        a/=10;
    }
    while(b>0){
        f2[b%10]++;
        b/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        if(f1[i]>0 && f2[i]>0) cnt++;
    }
    cout<<cnt;    
}