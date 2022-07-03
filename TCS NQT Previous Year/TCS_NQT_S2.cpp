/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[] = {5,5,5,5};
    int n = 4;
    bool flag = true;
    
    for(int i=0;i<n;i++){
        if((A[i]+A[i+1])/2 >= A[i])
            flag = true;
        else
            flag = false;
    }
    
    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
