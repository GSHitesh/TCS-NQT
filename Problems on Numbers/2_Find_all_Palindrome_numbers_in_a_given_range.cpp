// 2 Find all Palindrome numbers in a given range

#include <iostream>

using namespace std;

int main()
{
    int min,max;
    cin >> min >> max;
    
    for(int i=min;i<=max;i++)
    {
    int N = i;  // don't use for loop variable i, declare a separate variable
    int rev = 0;
    while(N>0)
    {
        rev = rev*10 + N%10;
        N = N/10;
    }
    
    if(rev == i)
        std::cout << i << " ";
    
    }
    
    
    
    return 0;
}
