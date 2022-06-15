// 13. Adding Element in an Array

#include <iostream>

using namespace std;

int * addBeginning(int A[], int n, int index,int value)
{
    for(int i=n-1; i > index;i--)
    {
        A[i] = A[i-1];
    }
    A[index] = value;
    n++;
    return A;
}

int main()
{
    int A [10] = {1,2,3,4};
    int n = sizeof(A)/sizeof(A[0]);
    int index = 4;
    int value = 6;
    
    int *B = addBeginning(A,n,index,value);
    for(int i=0;i<n;i++){
        std::cout << B[i] << std::endl;
    }
    

    return 0;
}