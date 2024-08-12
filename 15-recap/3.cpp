#include <iostream>
#include <cmath>
using namespace std;

int n,mx,mn,r,x;
int main(){
    cin>>n;
    mn=2000000000;
    for (int i = 0; i < n; i++)
    {
         cin>>x;
         if(x>mx) mx=x;
         if(x<mn) mn=x;
    }
    int cx=mx;
    int cn=mn;
    //cout<< mx<< endl<<mn;
    while(mn!=0){
        r=mx%mn;
        mx=mn;
        mn=r;
    }
    cout<< cn/mx<<"/"<<cx/mx;
    
}