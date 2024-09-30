#include <iostream>
using namespace std;

int array[20005], frequency[20005], solution, distincts, value, length, lft, rt, k;
int main()
{
    length = 1;
    cin >> k;
    while (cin >> value)
    {
        array[length++] = value;
    }
    
    lft = 1;
    frequency[array[1]]++;
    rt = 2;
    frequency[array[2]]++;
    if (array[1] == array[2])
        distincts = 1;
    else
        distincts = 2;
    while (lft <= rt && rt < length)
    {
            if(distincts<=k){
                rt++;
                if (frequency[array[rt]]==0)
                {
                    frequency[array[rt]]++;
                    distincts++;
                }else{
                    frequency[array[rt]]++;
                }
                
            }
            if (distincts==k)
            {
                solution++;
            }
            
            if(distincts>k){
                while (frequency[array[lft]]>1)
                {
                    lft++;
                    frequency[array[lft]]--;
                }
                distincts--;
                
            }
    }
    cout<<solution;
}