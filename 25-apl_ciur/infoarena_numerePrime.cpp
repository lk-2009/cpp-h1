#include <fstream>
using namespace std;

ifstream cin("prim.in");
ofstream cout("prim.out");

int c[100005], nr[100005], n,k;

int main(){
    cin>>k;
    for (int i = 2; i * i < 100005; i++)
    {

        if (c[i] == 0)
        {

            for (int j = i * i; j < 100005; j = j + i)
            {
                c[j] = 1;
            }
        }
    }
    for (int i = 2; i < 100005; i++)
    {
        if(c[i]==0) nr[n++]=i;
        if(n==k) break;
    }
    for (int i = 2; i < 100005; i++)
    {
        bool ok=true;
         for (int j = 0; j < k; j++)
         {
             if(i%nr[j]==0){
                ok=false;
                continue;
             }
         }
         if(ok==true){
            if(c[i]==1){
                cout<<i;
                return 0;
            }
         }
         
    }
    
    
}