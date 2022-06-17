// 22 Check if a number is a Strong Number or not

#include <iostream>

using namespace std;

int Factorial(int n)
{
    if(n==1 || n == 0)
        return 1;
    return Factorial(n-1)*n;
}

int main()
{
    int N;
    std::cin >> N;
    int n = N, sum = 0;
    while(N>0)
    {
        int k = N%10;
        sum += Factorial(k);
        N = N/10;
    }
    
    if(n == sum )
        std::cout << "Strong Number" << std::endl;
    else
        std::cout << "Not Strong Number" << std::endl;

    return 0;
}
