#include <iostream>
using namespace std;

long long int n;
int cf,cnt;
double s;
int main(){
    cin>>n;
    while(n > 0){
        cf=n%10;
        n/=10;
        if(cf%2==1){
            cnt++;
            s+=cf;
        }
    }
    cout<<s/cnt;
}