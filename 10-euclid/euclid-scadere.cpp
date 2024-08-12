#include <iostream>
using namespace std;

int a,b;
int main(){
    cin>>a>>b;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    cout<<a;
    
}