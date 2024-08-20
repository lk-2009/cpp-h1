#include <iostream>
using namespace std;

int v[105],n;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>v[i];
    }
    for (int i = 1; i < n-1; i++)
    {
         if (v[i]%2==v[i-1]%2 && v[i]%2==v[i+1]%2)
         {
            cout<<"DA";
            return 0;
         }
         
    }
    // if(v[0]%2==v[1]%2){
    //     cout<<"DA";
    //     return 0;
    // }
    // if (v[n]%2==v[n-1]%2)
    // {
    //     cout<<"DA";
    //     return 0;
    // }
    
    cout<<"NU";
    
    
}