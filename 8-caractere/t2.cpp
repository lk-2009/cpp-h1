#include <iostream>
#include <math.h>
using namespace std;

int mx,mn,cf1,cf2;
char c1,c2;
int main(){
    cin>>c1>>c2;
    if(c1>='0' && c1<='9' && c2>='0' && c2<='9'){
        cf1=(int)c1-48;
        cf2=(int)c2-48;
        mx=max(cf1,cf2);
        mn=min(cf1,cf2);
        cout<<mx*10+mn;
    }
    else
    {
        cout<<" trebuie introduse cifre ";
    }
}