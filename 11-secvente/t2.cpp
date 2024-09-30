#include <iostream>
using namespace std;

float n,v[200],mx1,cnt=1;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>v[i];
         if(v[i]>mx1){
            mx1=v[i];
            cnt=1;
         }else if (v[i]==mx1)
         {
            cnt++;
         }
         
    }
    cout<<mx1<<" "<<cnt;
    
    
}