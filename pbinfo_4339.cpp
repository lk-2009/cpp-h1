// gauss
#include <iostream>
using namespace std;

int n, S, v;
int main()
{
    // n=12345-1234-123-12-1-0
    // c-5-4-3-2-1
    // S-5-4-3-2-10> S=S+5= 0+5=> 5+4=9 => 9+3
    while (n != 0)
    {
        c = n % 10;
        n = n / 10;
        S = S + c;
    }
    /*i=i*10+u
    u= ultima cifra
    i=invers
    n=123456=>12345=>1234=>123
    i=0=>i=6=>65=>654
    u=6=>u=5=>4=>3
    123456
    while(N!=0){
    u=n%10;
    }

    #include <iostream>
    using namespace std;

    int n,x;
    int main(){
    cin>>x;
    while(x<=n){
    if(x%2==0){
    cout<<x<<" ";
    }
    x++;
    }
    }


    */
}