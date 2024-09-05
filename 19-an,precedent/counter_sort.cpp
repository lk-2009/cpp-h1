 #include <iostream>
 using namespace std;

 int n,v[100],f[10005],j;
 int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>v[i];
         f[v[i]]++;
    }
    for (int i = 0; i < 1000; i++)
    {
        while(f[i]>0){
            v[j++]=i;
            f[i]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
            cout<<v[i];
    }
    
    
    
 }