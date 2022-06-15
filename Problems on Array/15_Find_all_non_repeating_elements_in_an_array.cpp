// 15. Find all non repeating elements in an array

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[]={1,2,-1,1,3,1};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<=n-1;i++)
    {
        int count = 1;
        
        if(arr[i] != INT_MAX)
        {
            for(int j=i+1;j<=n;j++)
                {
                    if(arr[i] == arr[j]){
                        arr[j] = INT_MAX;
                        count++;
                    }
                }
                
                if(count == 1)
                    std::cout << arr[i] <<" ";
                    // std::cout << arr[i] <<" " << count << std::endl;
        }
    }

    return 0;
}
