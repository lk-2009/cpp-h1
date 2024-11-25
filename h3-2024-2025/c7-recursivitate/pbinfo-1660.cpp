#include <iostream>
using namespace std;

int l,r;

int numarare_goluri(int l, int r){
    if(l==0 || r==0) return 1;
    else return numarare_goluri(l-1 , r) + numarare_goluri(l, r-1);
}
int main(){
    cin>>l>>r;
    cout<<numarare_goluri(l , r)
}
/*#include <iostream>
using namespace std;

int l,r;
int deja_calculat[11][11]

int numarare_goluri(int l, int r){
    if(l==0 || r==0) return 1;
    if(deja_calculat[l][r]) return deja_calculat[l][r];
    deja_calculat[l][r] = numarare_goluri(l-1 , r) + numarare_goluri(l, r-1);
    return deja_calculat[l][r];
}
int main(){
    cin>>l>>r;
    cout<<numarare_goluri(l , r);
}
 */