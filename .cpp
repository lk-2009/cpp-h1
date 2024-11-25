#include <iostream>
using namespace std;

int a, b, c, nrimp, nrpar;
int main()
{
    cin >> a >> b >> c;
    if (a % 2 == 1){
        nrimp++;
    }
    else{
        nrpar++;
    }
    if (b % 2 == 1){
        nrimp++;
    }
    else{
        nrpar++;
    }
    if (c % 2 == 1){
        nrimp++;
    }
    else{
        nrpar++;
    }if (nrpar > nrimp)
    {
        cout << "pare";}
    else{
        cout << "impare";
    }
}
