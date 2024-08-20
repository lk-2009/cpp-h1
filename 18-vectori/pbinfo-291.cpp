#include <iostream>
using namespace std;

int v[105],n;
int num_cif( int x){
    int nr_cif=0;
    int copy=x;
    while(copy>0){
        nr_cif++;
        copy/=10;
    }
    return nr_cif;
}
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(num_cif(v[i])%2==1){
            cout<<"NU";
            return 0;
        }
    }
    cout<<"DA";
    
    
}