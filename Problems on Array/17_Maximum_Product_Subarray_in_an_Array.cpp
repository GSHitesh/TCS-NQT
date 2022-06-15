// 17 Maximum Product Subarray in an Array


#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int A[] = {1,2,3,4,0,5,0};
    int n = sizeof(A)/sizeof(A[0]);
    int sum = 1;
    int max = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum *= A[i];
        if(sum > max)
            max = sum;
            
        if(sum <= 0)
            sum = 1;
    }
    
    std::cout << max << std::endl;

    return 0;
}
