#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("lascoala.in");
ofstream cout("lascoala.out");

int n,k,p,root;
int main(){
    cin>>n;
    if(sqrt(n)==(int)sqrt(n)){
        k=pow(sqrt(n)-1,2);
    }else
    {
        k=pow((int)sqrt(n),2);
    }
    cout<<n-k<<endl;
    p=sqrt(k);
    int copy=p;
    for (int i = n-(n-k); i>0 ; i--)
    {
         if(p==0) {cout<<endl; p=copy;}
         cout<<i<<" ";
         p--;

    }
    


    cout<<endl<<endl<<endl<<endl;
}