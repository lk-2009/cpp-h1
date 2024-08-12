#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

ifstream fin("numere_3_divizori.in");
ofstream fout("numere_3_divizori.out");

int n,nrd;
int main(){
    fin>>n; 
    cout<<n<< endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" => ";      
      for (int j = 1; j <= i; j++)
        {
          
            if(i%j==0){ nrd++; cout<<j << " ";}
        }
       cout << "\n";
        if(nrd==3) fout<<i<<" ";
        nrd=0;
        
    }
    
}