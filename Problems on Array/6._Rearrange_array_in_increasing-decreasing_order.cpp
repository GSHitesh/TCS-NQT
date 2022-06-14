// 6. Rearrange array in increasing-decreasing order

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H[1000000]={0};
    int A [] = {8, 7, 1, 6, 5, 9};
    int n = 6;
    int m = n/2;
    
    sort(A,A+n);
    
    for(int i =0;i<m; i++)  
        cout << A[i] << " ";
    
    for(int i=n-1; i>=m;i--)
        cout << A[i] << " ";
    
    return 0;
}
