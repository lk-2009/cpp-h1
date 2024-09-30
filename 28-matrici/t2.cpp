#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("mincols1.in");
ofstream fout("mincols1.out");
int n,v[31][31],p=1,mmin[100],ok=0,b=1;
int main()
{
    fin>>n;
    for(int i=1;i<=100;i++){
        mmin[i]=100;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>v[i][j];
        }
    }
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            if(v[i][j]<mmin[b]){
                mmin[b]=v[i][j];
            }
        }
        b++;
    }
    b=1;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            if(i+j==n+1 && v[i][j]==mmin[b]){
                p*=(v[i][j]%10);
                ok=1;
            }
        }
        b++;
    }
    if(ok==0){
        fout<<"NU EXISTA";
    }else
    {
        fout<<p%10;
    }
}
