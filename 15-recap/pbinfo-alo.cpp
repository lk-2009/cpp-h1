#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("alo.in");
ofstream fout("alo.out");

int n,s,x,y;

int cost_apel(int x, int y){
    if(x%10==5){
        if(x/10000==1) return 2*y;
        else return -y;
    }
    return 0;
};

int main(){
    fin>>s>>n;
    for (int i = 0; i < n; i++)
    {
        fin>>x>>y;
        s-=cost_apel(x,y);
    }
    fout<<s;
    
}