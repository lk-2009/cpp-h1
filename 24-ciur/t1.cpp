#include <fstream>
using namespace std;

ifstream cin("eratostene.in");
ofstream cout("eratostene.out");

int n,x,ciur[1000005],cnt;
int main(){
    cin>>n;
    ciur[0]=ciur[1]=1;
     for (int i = 2; i*i <= 1000000; i++)
     {
         
          if (ciur[i]==0)
          {
               
             for (int j = i*i; j <= 1000000; j=j+i)
             {
                  ciur[j]=1;
             }
            
          }
          
         
     }
     for (int i = 0; i < n; i++)
     {
        cin>>x;
         if(ciur[x]==0) cnt++;
     }
     cout<<cnt;
    
}