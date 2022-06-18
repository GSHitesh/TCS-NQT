// 24 GCD of two number

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    std::cin >> n1 >> n2;
    
    for(int i=min(n1,n2);i>0;i--)
    {
        if(n1%i==0 && n2%i ==0)
        {
            cout << i ;
            break;
        }
    }
        

    return 0;
}
