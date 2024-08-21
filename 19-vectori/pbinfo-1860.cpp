#include <fstream>
//#include <iostream>
using namespace std;

ifstream cin("blackfriday.in");
ofstream cout("blackfriday.out");
double n,initial[15],after[15],max_drop;
double precent, max_found;
int main(){
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
         cin>>initial[i];
         //cout<<initial[i];
    }
    for (int i = 1; i <= n; i++)
    {
         cin>>after[i];
        // cout<<" "<<after[i]<<" ";
    }
    for (int i = 1; i <= n; i++)
    {
         precent=(initial[i]-after[i])/ initial[i] * 100;
        //cout<<endl<<(initial[i]-after[i]) / initial[i];
         //cout<<precent;
         if(precent>max_found){
            max_found=precent;
            max_drop=i;
         }
    }
    cout<<max_drop;
    
}