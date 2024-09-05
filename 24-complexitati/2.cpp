#include <iostream>
#include <string.h>
using namespace std;

long long n,cf;
int main(){
    while(n>0){
        cf=cf*10+n%10;
        n/=10;
    }
}