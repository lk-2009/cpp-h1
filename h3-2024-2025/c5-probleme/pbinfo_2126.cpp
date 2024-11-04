#include <fstream>
using namespace std;

ifstream cin("nrmaxinterv.in");
ofstream cout("nrmaxinterv.out");

int start[100005], finish[100005],id1,id2;
int n,cnt,sol;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>start[i]>>finish[i];
    }
    while(id1<n && id2<n){
        if(start[id1] <= finish[id2]){
            id1++;
            cnt++;
            sol=max(sol,cnt);
        }else{
            id2++;
            cnt--;
        }
    }
    cout<<sol;
    
}
