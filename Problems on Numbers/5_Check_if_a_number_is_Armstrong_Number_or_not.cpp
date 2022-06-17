// 5 Check if a number is Armstrong Number or not

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n; int sum = 0;
   
    std::cin >> n;
    int N = n;
    int size = trunc(log10(n) + 1); // floor can also be used
    
    while(n>0)
    {
        sum += pow(n%10,size);
        n = n/10;
    }
    
    if(N == sum)
        std::cout << "Armstrong" << std::endl;
    else
        std::cout << "Not Armstrong" << std::endl;
   

    return 0;
}
