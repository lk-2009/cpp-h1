#include <iostream>
using namespace std;

int n, f[11],nr;
int main(){
    cin>>n;
    while(n>0){
        f[n%10]++;
        n/=10;
    }
    for (int i = 1; i <= 9; i++)
    {
        if(f[i]>0){
            nr=i;
            f[i]--; 
            break;
        }  
    }
    for (int i = 0; i < 10; i++)
    {
         while(f[i]>0){
            nr=nr*10+i;
            f[i]--;
         }
    }
    cout<<nr;
    
    

}