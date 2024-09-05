#include <iostream>
using namespace std;


int n,k,v[1000],ciur[1000];
int main(){

    cin>>n>>k;
    for (int i = 2; i * i < 1005; i++)
    {

        if (ciur[i] == 0)
        {

            for (int j = i * i; j < 1005; j = j + i)
            {
                ciur[j] = 1;
            }
        }
    }
    
}