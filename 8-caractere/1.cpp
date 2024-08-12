#include <iostream>
using namespace std;

int n;
char c;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>c;
        if (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U' )
        {
             cout<< "Vocala  ";
        }else if((c>='A' && c<='Z') || (c>='a' && c<='z')) cout<<"Consoana  ";
         else cout<<" Nu e litera  ";

        
    }
    
}
