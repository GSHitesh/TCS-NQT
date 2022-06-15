// 16. Find all Symmetric Pairs in the array of pairs

#include <iostream>

using namespace std;

int main()
{
    int A [][2] = { {1,1},{2,1},{1,2},{2,3},{3,4},{4,5},{5,4} };
    // Can also be be solved by using STL Maps concept and also by using vector
    int n = sizeof(A)/sizeof(A[0]);
    
    for(int i=0;i<n-1;i++)    // i is iterating the row
    {
        for(int j=i+1; j<n; j++)    // j is also iterating the row i+1
        {
            if(A[i][0] == A[j][1] && A[i][1] == A[j][0] )
                std::cout << "(" << A[i][0] << " " << A[i][1] << ")" << " ";
        }
    }

    return 0;
}
