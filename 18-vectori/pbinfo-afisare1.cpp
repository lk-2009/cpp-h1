#include <iostream>
using namespace std;

int v[1005], n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n/2; i++)
    {
         
        cout<<v[i]<<" "<<v[n-1-i]<<" ";
         
         
    }
    if(n%2==1){
        cout<<v[n/2];
    }
    
}