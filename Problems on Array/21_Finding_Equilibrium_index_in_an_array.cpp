// 21 Finding Equilibrium index in an array


#include <iostream>

using namespace std;

int main()
{
    int nums [] = {2,3,-1,8,4};
    
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int sum =0, Rsum,Lsum = 0;
    
    for(int i=0;i<n;i++)
    {
        sum += nums[i];
    }
   
    Rsum = sum;
    
    for(int i=0;i<n;i++)
    {
        Rsum -= nums[i];
        
        if(Rsum == Lsum)
        {
            std::cout << i << std::endl; //printing with 0 indexing
            exit(0);
        }
        
        Lsum += nums[i];
    }
    
    std::cout << -1 << std::endl;

    return 0;
}
