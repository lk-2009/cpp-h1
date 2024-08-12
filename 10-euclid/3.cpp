#include <math.h>
#include <iostream>
using namespace std;

long long a,b,cnt;
int main(){

    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
         if((int)sqrt(i)==sqrt(i)) cnt++;
    }
    cout <<cnt; 
    
}