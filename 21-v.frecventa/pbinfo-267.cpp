#include <fstream>
using namespace std;

ifstream cin("unice.in");
ofstream cout("unice.out");

int n, v[105],x;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v[x]++;;
    }
    for (int i = 0; i < 105; i++)
    {
         if (v[i]==1)
         {
            cout<<i<<" ";
         }
         
    }
    
    
}