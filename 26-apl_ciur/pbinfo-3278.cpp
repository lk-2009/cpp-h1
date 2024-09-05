#include <iostream>
using namespace std;

const int LMAX=50000;
bool c[LMAX+1],v[50001];
int main(){
    for (int i = 2; i*i <= LMAX; i++)
    {
        if (c[i]==0)
        {
                for (int j = i*i; j <= LMAX; j+=i)
                {
                     c[j]=1;
                }
                
        }
        
    }
    int m=1;
    for (int i = 2; i <= LMAX; i++)
    {
        if (c[i]==0)
        {
                for (int j = i; j <= LMAX && i*j<=LMAX; j++)
                {
                     if(c[j]==0){
                        v[m++]=i*j;
                        
                     }
                }
                
        }
        
    }
    cout<<m<<endl;
    for (int i = 1; i < m; i++)
    {
         cout<<v[i]<<" ";
    }
    



    
}