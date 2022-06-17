// 1 Check if a number is palindrome or not

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int n = N;
    int rev = 0;
    while(N!=0)
    {
        rev = rev*10 + N%10;
        N= N/10;
    }
    
    if(rev == n)
        std::cout << "palindrome" << std::endl;
    else
        std::cout << "Not palindrome" << std::endl;
    
    
    
    return 0;
}
