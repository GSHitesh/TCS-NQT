// 16 Maximum and Minimum Digit in a Number

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n,N;
    std::cin >> n;
    
    int min_ = INT_MAX;
    int max_ = INT_MIN;
    
    while(n > 0)
    {
        N = n%10;
        min_ = min(min_,N);
        max_ = max(max_,N);
        n = n/10;
    }
    
    cout << "Min: " << min_ << endl;
    cout << "Max: " << max_ << endl; 

    return 0;
}
