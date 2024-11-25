#include <iostream>
using namespace std;

int n;
int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}
int main(){
    cin>>n;
    cout<<factorial(n);
}