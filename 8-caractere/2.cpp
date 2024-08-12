#include <iostream>
using namespace std;

int n,s;
char c;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>c;
        if (c>='0' && c<='9')
        {
            s+=((int)c-48);
        }
        
    }
    cout<<s;
    
}