#include <fstream>
#include <climits>
using namespace std;

ifstream cin("ausoara.in");
ofstream cout("ausoara.out");

void computeLCS(int a[], int &n, int b[], int m){
    int i=1, j=1, p=1;
    while (i<n && j<m)
    {
        if (a[i]==b[j])
        {
            a[p] = a[i];
             i++; j++; p++;
        }else if (a[i]<b[j])
        {
            i++;
        }else j++;
        
        
    }
    n=p-1;
    
}

const int nmax=1005;
int numArray,answer[nmax],n;
int main(){
    cin>>numArray;
    cin>>n;
    for (int i = 0; i < numArray; i++)
    {
         cin>>answer[i];
    }
    for (int i = 1; i < numArray; i++)
    {
         int array[nmax],m;
         cin>>m;
         for (int j = 0; j < m; j++)
         {
            cin>>array[j];
         }
         computeLCS(answer,n,array,m);
         
    }
    cout<<answer;
    

}
