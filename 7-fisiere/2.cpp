#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("p2cf.in");
ofstream fout("p2cf.out");

int n,ogl,sum;
int main(){
    fin>>n;
    while(n>0){
        ogl=ogl*10+n%10;
        n/=10;
    }
    sum=ogl%10+ogl/10%10;
    fout<<sum;
}