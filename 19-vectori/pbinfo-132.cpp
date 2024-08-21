#include <fstream>
//#include <iostream>
#include <math.h>
using namespace std;

ifstream cin("elempp.in");
ofstream cout("elempp.out");

int n, x;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        int cx=x;
        while (x>99)
        {
            x/=10;
        }
        if(sqrt(x)==(int)sqrt(x)) cout<<cx<<endl;
        
    }
    
}