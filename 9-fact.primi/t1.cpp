#include <iostream>
using namespace std;

long long int n;
int c;
int main(){
    cin>>n;
    c=n%10;
    n/=10;
    while (n>0)
    {
        if(c!=n%10){
            cout<<"NU";
            return 0;
        }
        n/=10;
    }
    cout<<"DA";  
}
