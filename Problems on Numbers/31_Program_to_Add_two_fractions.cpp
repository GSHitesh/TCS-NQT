// 31 Program to Add two fractions

#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int a,b,c,d; // a/b     c/d
    
    //a is numerator1 b is denominator1
    //c is numerator2 d is denominator2
    
    cin >>a >>b >>c >>d;
    
    int lcm = b*d/__gcd(b,d);   // __gcd built-in function
    int x = lcm/b*a + lcm/d*c;
    
    
    if(x%lcm != 0)
        cout << x << "/" << lcm;
    else
    {
        int i = __gcd(x,lcm);
        cout << x/i << "/" << lcm/i;
        
    }
    
    
    
    

    return 0;
}