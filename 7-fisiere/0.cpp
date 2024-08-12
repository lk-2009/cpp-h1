#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("cf_pare.in");
ofstream fout("cf_pare.out");

int n,cf;
int main(){
    fin>>n;
    while(n!=0){
        cf=n%10;
        n/=10;
        if(cf%2==0) fout<<cf<<" ";
    }
}