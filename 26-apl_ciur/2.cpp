#include <iostream>
#include <math.h>
using namespace std;

int n, k;
const int LMAX = 31700;
int ndprimi[LMAX+1],ndproprii[LMAX+1];
int main()
{
    cin >> n;
    // for (int i = 36; i < n; i++)
    // {
    //      if((int)sqrt(i)==sqrt(i)){
    //         int cnt=3;
    //         for (int j = 2; j*j < i; j++)
    //         {
    //              if(i%j==0) cnt+=2;
    //              if(cnt>9) break;
    //         }
    //         if(cnt==9){
    //             k++;
    //         }

    //      }
    // }
    // cout<<k;
    for (int i = 2; i*i <= LMAX; i++)
    {
         if (ndprimi[i]==0)
         {
                for (int j = i+i; j <= LMAX; j+=i)
                {
                     ndprimi[j]++;
                }
                
         }
         
    }
    for (int i = 2; i+i <= LMAX; i++)
    {
        for (int j = i+i; j <= LMAX; j++)
        {
            ndproprii[j]++;
        }
        
    }
    int cnt=0;
    for (int i = 2; i*i <= n; i++)
    {
         if ((ndprimi[i]==2 && ndproprii[i]==2)|| (ndprimi[x]==1 && ndproprii[i]==3))
         {
            cnt++;
         }
         
    }
    cout<<cnt;
    
    
    
    
    
}