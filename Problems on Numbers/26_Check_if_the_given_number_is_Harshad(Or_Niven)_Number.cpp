// 26 Check if the given number is Harshad(Or Niven) Number

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
    while(n>0)
    {
        sum += n%10;
        n = n/10;
    }
    string result = (N%sum == 0) ? "Harshad Number": "Not Harshad Number";
        std::cout << result << std::endl;

    return 0;
}
