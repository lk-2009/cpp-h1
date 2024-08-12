#include <iostream>
#include <math.h>
using namespace std;

int a,b,n,fact,ci,cnt,sol,mx;
int main(){

    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
         ci=i;
         fact=0;
        for (int j = 2; j <=sqrt(i); j++)
        {
            cnt=0;
            if(ci==1) break;
            while(ci%j==0){
                cnt++;
                ci/=j;
            }
            
            if (cnt)
            {
                 fact++;
                 
            }
        
         
        }
        if(ci != 1){ fact++;}
     
        
        if(fact==mx) {
            sol++;
          
        }
        if(fact>mx){
            mx=fact;
         
            sol=1;
            continue;
        }
    }
    cout<<endl<<sol;
    
}