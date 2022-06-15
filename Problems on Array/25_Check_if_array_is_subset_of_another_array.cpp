// 25 Check if array is subset of another array

#include <iostream>

using namespace std;

int main()
{
    int arr1[]= {1,3,4,5,2};
    int arr2[]= {2,4,3,1,7,5,15};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    int count = 0;
    
    if(n1 > n2){
        cout << "Not a subset";
        exit(0);    // To stop the execution in between
    }
    
    else
    {
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(arr1[i] == arr2[j])
                    count++;
            }
        }
    }
    
    if(count == n1)
        cout << "Is a subset";
    else
        cout << "Not a subset";

    return 0;
}
