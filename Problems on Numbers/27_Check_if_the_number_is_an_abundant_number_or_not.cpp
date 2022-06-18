// 27 Check if the number is an abundant number or not

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    
    int N = n;
    int sum = 0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i == 0)
            sum += i;
    }
    string result = (N < sum) ? "Abundant Number": "Not Abundant Number";
        std::cout << result << std::endl;

    return 0;
}
