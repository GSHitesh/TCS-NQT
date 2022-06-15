// 18 Replace elements by its rank in the array

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A[] = {20, 15, 26, 2, 98, 6};
    int n = sizeof(A)/sizeof(A[0]);
    
    int B[n];
    
    for(int i=0;i<n;i++)
        B[i] = A[i];
        
    sort(B,B+n);
    
    // Time Complexity = O(n*n) 
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i] == B[j])
                    std::cout << j+1<< " "; // j gives the rank
            }
        }

    return 0;
}
