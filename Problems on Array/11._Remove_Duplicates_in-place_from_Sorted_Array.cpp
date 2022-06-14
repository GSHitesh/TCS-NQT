// 11. Remove Duplicates in-place from Sorted Array

#include <iostream>

using namespace std;

int main()
{
    int H[1000000];
    int A[] = {1,1,1,2,2,3,3,3,3,4,4,5};
    int n = sizeof(A)/sizeof(A[0]);
    
    for(int i=0;i<n; i++)
        H[A[i]]++;
        
    for(int i=1;i<=A[n-1];i++){
        if(H[i] > 0)
            cout << i << " ";
    }

    return 0;
}
