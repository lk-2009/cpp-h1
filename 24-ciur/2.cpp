#include <iostream>
using namespace std;

int c[1000],n;
int main(){
    cin>>n;
    for (int i = 2; i*2 <= n; i++)
    {
         if(c[i]==0){
            for (int j = i*2; j <= n; j+=i)
            {
                 c[i]++;
            }
            
         }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    
    
}