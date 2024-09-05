#include <fstream>
using namespace std;

ifstream cin("potrivire.in");
ofstream cout("potrivire.out");

int n,m,f[100005],v[100005],x,arrange[100005];

int nr_cif(int x){
    int cx=x;
    int nrcif=0;
    while(cx>0){
        cx/=10;
        nrcif++;
    }
    return nrcif;
}
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
         cin>>arrange[i];
         f[arrange[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
         
    }
    

    
    
}