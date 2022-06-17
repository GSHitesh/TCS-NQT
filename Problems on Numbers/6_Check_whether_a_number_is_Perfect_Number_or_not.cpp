// 6 Check whether a number is Perfect Number or not

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n; int sum = 0;
   
    std::cin >> n;
    int N = n;
    
    for(int i=1;i<=n/2;i++){
        if(n%i == 0)
            sum += i;
    }
    
    if(N == sum)
        std::cout << "Perfect Number" << std::endl;
    else
        std::cout << "Not Perfect Number" << std::endl;

    return 0;
}
