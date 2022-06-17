// 11 Find Sum of GP Series

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,a,r;
    std::cin >> n >> a >> r;
    
    float sum = a*((pow(r,n)-1)/(r-1));
    
    std::cout << sum << std::endl;

    return 0;
}
