// 5. Count frequency of each element in an array
#include <iostream>

using namespace std;

int main()
{
    int H[1000000]={0};
    int A [] = {1,5,6,4,3,1,5,2,3,4,6,1};
    int n = 12;
    
    for(int i =0; i < n ;i++ )
        H[A[i]]++;
        
    for(int i = 1; i < 1000000;i++ ){
        if(H[i] > 0){
            cout << i << "-" << H[i] << endl;
        }
    }
    return 0;
}
