#include <iostream>
using namespace std;


int a,n,ca;

int main(){
    cin>>a>>n;
    ca=a;
    while(n>1){
        a=a*ca;
        n--;
        if(a>=131071) a=a%131071;    
    }
    cout<<a;
}
