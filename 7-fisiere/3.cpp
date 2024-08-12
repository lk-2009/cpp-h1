#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sum.in");
ofstream fout("sum.out");

int n,cnt5,cnt3;
bool in;
int main(){
    fin>>n;
    for (int i = 0; i < n/5; i++)
    {
        if((n-i*5)%3==0){ 
            cnt5=i;
            cnt3=(n-5*i)/3;
            in=1;
            break;
            
        }
    }
    if (in)
    {
        while (cnt5)
        {
            fout<<5<<" ";
            cnt5--;
        }
        while (cnt3)
        {
            fout<<3<<" ";
            cnt3--;
        }
        return 0;
        
        
    }
    fout<<"imposibil";
    

    
}