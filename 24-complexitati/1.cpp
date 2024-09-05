#include <iostream>
#include <math.h>
using namespace std;
long long x;
int main(){
    cin>>x;
    int cnt=2;
    for (int i = 2; i*i < x; i++)
    {
            if(x%i==0) cnt+=2;
    }
    if((int)sqrt(x)==sqrt(x) && (int)sqrt(x)%2==1) cnt++;
    cout<<cnt;
    //O(sqrt(n))
    
}