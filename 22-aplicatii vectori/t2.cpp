#include <iostream>

using namespace std;
int n,i,v[100],j,aux;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        if(v[i]!=0){
            i++;
        }
        if(v[j]==0){
            j--;
        }
        if(v[i]==0 && v[j]!=0){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            i++;
            j--;
        }
    }
    for(i=0;i<n;i++){
        cout<<v[i];
    }

    return 0;
}