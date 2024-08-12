#include <fstream>
using namespace std;
ifstream cin("pavaj.in");
ofstream cout("pavaj.out");

long long int a,b,p,r;
int main(){
    cin>>a>>b;
    int ca=a;
    int cb=b;
    while(cb!=0){
        r=ca%cb;
        ca=cb;
        cb=r;
    }
    p=ca;
    cout<<p<<" " <<a/p * b/p;
}