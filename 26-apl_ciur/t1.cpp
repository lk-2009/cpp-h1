#include <iostream>
#include <math.h>
using namespace std;

int n;
bool c[100000];
int main(){
     c[0]=c[1]=1;
    for (int i = 2; i < 100000; i++)
    {
        if(c[i]==0){
            for (int j = i*2; j < 100000; j+=i)
            {
                 c[j]=1;
            }
            
        }
    }
    cin>>n;
    for (int i = 0; i < 100000; i++)
    {
         if (c[i]==0)
         {
            n--;
         }
         if (n==0)
         {
            cout<<pow(i,2);
            return 0;
         }
         
         
    }
    
    
}