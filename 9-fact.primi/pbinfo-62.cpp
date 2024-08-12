#include <iostream>
#include <math.h>
using namespace std;

int n,f,cnt,cn;
bool enter;
int main(){
    cin>>n;
    cn=n;
    for (int i = 2; i <= sqrt(cn); i++)
    {
        cnt=0;
        if(n==1) break;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if (cnt)
        {
             cout<<i<<" "<<cnt<<endl;
        }
        
         
    }
    if(n != 1) cout<< n<< " 1";
    
}