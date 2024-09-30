#include <iostream>
using namespace std;

int n,v[200],mx1,mx2;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>v[i];
         if(v[i]>mx1){
            mx2=mx1;
            mx1=v[i];
         }else if (v[i]>mx2)
         {
            mx2=v[i];
         }
         
    }
    cout<<mx1<<" "<<mx2;
    
    
}