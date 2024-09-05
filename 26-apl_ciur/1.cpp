#include <iostream>
using namespace std;

const int lmax=999999;
bool c[lmax+1];
long long int a,b,y,s,cnt,mini,maxi;
int main(){
    c[0]=c[1]=1;
    for (int i = 2; i < lmax; i++)
    {
        if(c[i]==0){
            for (int j = i*2; j < lmax; j+=i)
            {
                 c[j]=1;
            }
            
        }
    }
    cin>>a>>b;
    for (int i = a; i < b; i++)
    {
         if (c[i]==0)
         {
             int p=1;
             s=0;
             while (p<i)
             {
                 y=i/(p*10)*p + i%p;
                 s+=c[y];
                 p*=10;
             }
             if (s==0)
             {
                 cnt++;
                 if (cnt==1)
                 {
                    mini=i;
                 }
                 maxi=i;
                 
             }
             
             
         }
         
    }
    cout<<cnt<<'\n'<<mini<<'\n'<<maxi;
    
    
}