// 8. Rotate array by K elements : Block Swap

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A [] = {1,2,3,4,5};
    int n = 5;
    int k = 2;
    // reverse(A,A+n);     // Left shift of array by k elements
    // reverse(A,A+n-k);
    // reverse(A+n-k,A+n);
    
    reverse(A,A+n);     // right shift of array by k elements
    reverse(A+n-k-1,A+n);
    reverse(A,A+n-k-1);
    
    for(int i: A)
        cout << i << " ";
    return 0;
}
