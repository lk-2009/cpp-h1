#include <iostream>

using namespace std;
int v[100],i,n,aux;
int main()
{
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(i=0;i<n-i-1;i++)
    {
        aux = v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=aux;
    }

   for(i=0;i<n;i++)
   {
        cout<<v[i];
   }
    return 0;
}
