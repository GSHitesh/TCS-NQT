// 17 Print Fibonacci upto Nth Term

#include <iostream>
#include <climits>

using namespace std;

void Fibonacci(int n)
{
    int x =0,y =1,z = 0;
    for(int i=0;i<n;i++)
    {
        std::cout << x << " ";
        z = x + y;
        x = y;
        y = z;
        
    }
}
int main()
{
    int n,N;
    std::cin >> n;
    
    Fibonacci(n);

    return 0;
}
