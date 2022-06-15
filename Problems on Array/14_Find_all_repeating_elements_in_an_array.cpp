// 14. Find all repeating elements in an array

#include <iostream>

using namespace std;

int main()
{
   int arr[]={1,1,2,3,4,4,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n-1;i++)
    {
        int count = 1;
        
        if(arr[i] != -1)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(arr[i] == arr[j]){
                        arr[j] = -1;
                        count++;
                    }
                }
                
                if(count > 1)
                    std::cout << arr[i] <<" ";
                    // std::cout << arr[i] <<" " << count << std::endl;
        }
    }

    return 0;
}
