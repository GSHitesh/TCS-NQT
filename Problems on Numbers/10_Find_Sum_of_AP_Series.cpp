// 10 Find Sum of AP Series

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,a,d;
    std::cin >> n >> a >> d;
    
    int sum = 0.5*n*(2*a + (n-1)*d);
    
    std::cout << sum << std::endl;

    return 0;
}
